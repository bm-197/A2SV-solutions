from collections import defaultdict
n, m = map(int, input().split())

a = []
for _ in range(n):
    a.append(input().strip())

b = []
for _ in range(m):
    b.append(input().strip())

d = defaultdict(list)
for i, word in enumerate(a):
    d[word].append(i + 1)

for word in b:
    if word in d:
        print(" ".join(map(str, d[word])))
    else:
        print("-1")
