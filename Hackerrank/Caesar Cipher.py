n=int(input())
s=input()
k=int(input())
s=list(s)
a=""
i=0
while(i<n):
    if (ord(s[i])>=65 and ord(s[i])<=90):
        b=chr(ord(s[i])+k)
        if ord(b)>91:
            a=a+chr(65+(90-ord(s[i])))
        else:
             a=a+chr(ord(s[i])+k)
            
    elif (ord(s[i])>=97 and ord(s[i])<=122):
        b=chr(ord(s[i])+k)
        if ord(b)>123:
            a=a+chr(97+(122-ord(s[i])))
        else:
             a=a+chr(ord(s[i])+k)
    else:
        a=a+s[i]
    i+=1
print(a)
