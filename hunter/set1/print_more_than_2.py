n=int(input())
arr=[int(x) for x in input().split()]
d={}
count1=[]

for x  in arr:
    if x not in d.keys():
        d[x]=1
    else:
        d[x]+=1
for key ,value in d.items():
    if(d[key]>=2):
        count1.append(key)

if(len(count1)==0):
    print("unique")
else:
    count1.sort()
    for x in count1:
        print(x,end=" ")

