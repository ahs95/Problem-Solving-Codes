n = int(input())
sequence = [int(i) for i in input().split(" ")]

first = sequence.index(max(sequence))
last = sequence[::-1].index(min(sequence))
print(first + last) if (first < n - last) else print(first + last - 1)