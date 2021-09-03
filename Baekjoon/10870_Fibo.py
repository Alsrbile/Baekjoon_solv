import sys
read = sys.stdin.readline().rstrip()

n = int(read)

def Fibo(n):
    if (n == 0):
        return 0
    elif (n==1):
        return 1
    elif (n==2):
        return 1
    return Fibo(n-1)+Fibo(n-2)

print(Fibo(n))