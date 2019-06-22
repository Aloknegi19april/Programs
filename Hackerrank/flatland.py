n,m=map(int,input().split())
arr=list(map(int,input().split()))
m=0
d=arr[-1]-arr[0]
for i in range(n):
    mi=99999
    for e in arr:
        mi=min(mi,abs(i-e))
    m=max(m,mi)
print(m)