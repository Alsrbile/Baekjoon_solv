import sys
read = sys.stdin.readline().rstrip()

n = int(read)
L = [0]*n


L = list(map(int, input().split()))
L = sorted(L)

sum=0
for i in range(n):
    for j in range(i+1):
        sum+=L[j]

print(sum)