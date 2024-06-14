n = int(input())
A = set(list(map(int, input().split())))

n2 = int(input())
B = set(list(map(int, input().split())))

print(len(A.union(B)))
