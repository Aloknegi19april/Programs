n,d=map(int,input().split())
arr=list(map(int,input().split()))
c=0
for i in range(n-2):
    for j in range(i+1,n-1):
        for k in range(j+1,n):
            if i<j:
                if j<k:
                    if arr[j]-arr[i]==d and arr[k]-arr[j]==d:
                        c+=1

print(c)
