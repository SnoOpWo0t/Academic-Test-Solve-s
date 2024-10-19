size = 5
for _ in range(size):
    print("*"*size)
for i in range(1,size):
    print("*"*i)
for i in range(size, 0 ,-1):
    print('*'*i)
for i in range(1, size + 1):
    print(' ' * (size - i) + '* ' * i)
size = 5

for i in range(size):
    if i == 0 or i == size - 1:
        print('* ' * size)
    else:
        print('* ' + '  ' * (size - 2) + '* ')
for i in range(1, size + 1):
    print(' ' * (size - i) + '* ' * i)

for i in range(size - 1, 0, -1):
    print(' ' * (size - i) + '* ' * i)