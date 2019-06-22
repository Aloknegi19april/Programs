q=int(input())
for i in range(q):
    s=input()
    c=0
    j=0
    s=list(s)
    for j in range(len(s) - 1):
        if s[j]==s[j+1]:
            c+=1
        j+=1  
    print(c)

