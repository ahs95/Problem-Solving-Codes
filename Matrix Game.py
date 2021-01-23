t = int(input())
for _ in range(t):
    n , m = map(int,input().split())
    g = []
    for _ in range(n):
        g.append(list(map(int,input().split())))

    ns,ms = set(),set()
    for i in range(n):
        for j in range(m):
            if g[i][j] == 1:
                ns.add(i)
                ms.add(j)

    x = min(n-len(ns), m-len(ms))
    if x % 2 ==0:
        print('Vivek')
    else:
        print('Ashish')