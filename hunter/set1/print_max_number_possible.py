n=int(input())
arr=[int(x) for x in input().split()]
d={}
count1=[]

for x  in arr:
    if x not in d.keys():
        d[x]=1
        count1.append(x)
    else:
        d[x]+=1
answer=""
count1.sort(reverse=True)
for x in count1:
    #print(d[x])
    for i in range(d[x]):
        answer+=str(x)

print(answer)
