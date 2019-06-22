s=input()
s=list(s)
c=0
for i in s:
    c+=1
    for j in range(c,len(s)):
        if i==s[j]:
            s.remove(i)

print(s)
