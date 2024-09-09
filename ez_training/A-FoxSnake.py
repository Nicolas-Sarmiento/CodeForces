[n, m] = [int(x) for x in input().split()]
space = 1
for i in range(n):
    if i % 2 == 0:
        print('#'* m)
    else:
        if space%2 == 0:
            print('#' + ('.'*(m-1)))
        else:
            print(('.'*(m-1)) + '#')

        space += 1