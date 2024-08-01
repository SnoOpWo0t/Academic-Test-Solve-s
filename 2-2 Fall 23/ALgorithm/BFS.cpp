#include <bits/stdc++.h>
using namespace std;
#define V 5
void bfs(int graph[V][V], int start) {
    queue<int> q;
    bool visited[V] = {false};

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();//While the queue is not empty, it dequeues a vertex, prints it, 
                 //and then traverses all adjacent vertices of the dequeued vertex.

        cout << node << " ";

        for (int i = 0; i < V; i++) {
            if (graph[node][i] == 1 && !visited[i]) //If the adjacent vertex has not been visited yet and there is an edge from the current vertex to the adjacent vertex,
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    int graph[V][V] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0}
    };
    bfs(graph, 0);
    return 0;
}
/*For each adjacent vertex, if it has not been visited yet and there is an edge from the current vertex to the adjacent vertex (graph[node][i] == 1),
 it marks the adjacent vertex as visited, pushes it into the queue, and proceeds with the traversal.*/