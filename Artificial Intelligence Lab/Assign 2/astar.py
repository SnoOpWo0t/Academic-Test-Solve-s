import heapq
import time
import math

def read_input(filename):
    with open(filename, 'r') as f:
        lines = [line.strip() for line in f if line.strip()]
    m, n = map(int, lines[0].split())
    k = int(lines[1])
    obstacles = set(tuple(map(int, lines[i+2].split())) for i in range(k))
    idx = 2 + k
    c = int(lines[idx])
    terrain = {}
    for i in range(c):
        x, y, cost = lines[idx+1+i].split()
        terrain[(int(x), int(y))] = float(cost)
    start = tuple(map(int, lines[idx+1+c].split()))
    goal = tuple(map(int, lines[idx+2+c].split()))
    return m, n, obstacles, terrain, start, goal

def get_neighbors(pos, m, n, obstacles):
    x, y = pos
    moves = [(-1,0),(1,0),(0,-1),(0,1),(-1,-1),(-1,1),(1,-1),(1,1)]
    neighbors = []
    for dx, dy in moves:
        nx, ny = x+dx, y+dy
        if 0 <= nx < m and 0 <= ny < n and (nx, ny) not in obstacles:
            neighbors.append((nx, ny, dx, dy))
    return neighbors

def terrain_cost(terrain, cell):
    return terrain.get(cell, 1.0)

def move_cost(terrain, cell, dx, dy):
    base = terrain_cost(terrain, cell)
    if abs(dx) + abs(dy) == 2:
        return 1.4 * base
    return base

def manhattan(a, b):
    return abs(a[0]-b[0]) + abs(a[1]-b[1])

def diagonal(a, b):
    return max(abs(a[0]-b[0]), abs(a[1]-b[1]))

def euclidean(a, b):
    return math.hypot(a[0]-b[0], a[1]-b[1])

def astar(m, n, obstacles, terrain, start, goal, heuristic_fn):
    open_list = []
    heapq.heappush(open_list, (0, start))
    came_from = {}
    g_score = {start: 0}
    explored = []
    closed_set = set()
    while open_list:
        _, current = heapq.heappop(open_list)
        if current in closed_set:
            continue
        explored.append(current)
        closed_set.add(current)
        if current == goal:
            break
        for neighbor, dx, dy in [(nb[:2], nb[2], nb[3]) for nb in get_neighbors(current, m, n, obstacles)]:
            tentative_g = g_score[current] + move_cost(terrain, neighbor, dx, dy)
            if neighbor not in g_score or tentative_g < g_score[neighbor]:
                came_from[neighbor] = current
                g_score[neighbor] = tentative_g
                f_score = tentative_g + heuristic_fn(neighbor, goal)
                heapq.heappush(open_list, (f_score, neighbor))
    path = []
    node = goal
    if node in came_from or node == start:
        while node != start:
            path.append(node)
            node = came_from[node]
        path.append(start)
        path.reverse()
    else:
        path = []
    cost = sum(
        move_cost(terrain, path[i], path[i][0]-path[i-1][0], path[i][1]-path[i-1][1])
        for i in range(1, len(path))
    ) if path else float('inf')
    return path, cost, explored

def run_all(filename):
    m, n, obstacles, terrain, start, goal = read_input(filename)
    heuristics = [
        ("Manhattan", manhattan),
        ("Diagonal", diagonal),
        ("Euclidean", euclidean)
    ]
    results = []
    for name, hfn in heuristics:
        t0 = time.time()
        path, cost, explored = astar(m, n, obstacles, terrain, start, goal, hfn)
        runtime = time.time() - t0
        print(f"--- {name} Heuristic ---")
        print(f"Path: {path}")
        print(f"Path Cost: {round(cost, 4)}")
        print(f"Explored Nodes: {explored}")
        print(f"Total Explored: {len(explored)}")
        print(f"Runtime: {runtime:.6f} seconds\n")
        results.append((name, round(cost,4), len(path), len(explored), float(f"{runtime:.6f}")))
    print("Heuristic\tPath Cost\tPath Length\tTotal Explored Nodes\tRuntime (s)")
    for r in results:
        print(f"{r[0]}\t{r[1]}    \t\t{r[2]}\t\t{r[3]}\t\t\t{r[4]}")

if __name__ == "__main__":
    run_all("input.txt")