s=input()
n=int(input())
a=n//len(s)
c=a*s.count('a')
l=n%len(s)
s=list(s)
for i in range(l):
    if s[i]=='a':
        c+=1
    l-=1

print(c)