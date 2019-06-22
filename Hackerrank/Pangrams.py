s=input()
s=s.lower()
l=len(set(list(s)))
if l==27:
    print("pangram")
else:
    print("not pangram")
