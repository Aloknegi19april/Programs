s1=input()
s2=input()
c=0
s1=list(s1)
s2=list(s2)
s=set(s1).intersection(s2)
c=len(s1)+len(s2)-(2*len(s))            
print(c)
