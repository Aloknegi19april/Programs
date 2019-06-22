n=int(input())
Scores = list(map(int,input().split()))
Scores=set(Scores)
Scores=list(Scores)
Scores.reverse()
m=int(input())
Alice = list(map(int,input().split()))
rank= len(Scores)
for i in range(m):
    temp=rank
    for j in range(rank):
        if Alice[i]>=Scores[j]:
            temp-=1
        else:
            temp+=1
            break
    if(temp==0):
        temp=1
    print(temp)
        
