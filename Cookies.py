n = int(input())
l = list(map(int,input().split()))
s = sum(l)
result = 0
for i in l:
    if (s-i) % 2 ==0:
        result += 1
print(result)