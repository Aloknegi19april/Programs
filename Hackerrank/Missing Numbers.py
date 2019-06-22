n = int(input())
arr = list(map(int, input().split()))
m = int(input())
brr = list(map(int, input().split()))
arr.sort()
brr.sort()
missing = list()
for i,j in (arr, brr):
    if i == j:
        pass
    else:
        missing.append(j)
        i -= 1
        j += 1
missing = list(set(missing))
print(*missing)
