t = int(input())
L=[]
R=[]

for i in range(t):
    n=int(input())
    for j in range(n):
        hint = list((input().rstrip().split()))
        hint[1]=int(hint[1])
        if hint[0] == "L":
            L.append(hint[1])
        elif hint[0] == "R":
            R.append(hint[1])

    if len(L)!=0 and len(R)!=0:
        a=max(R)
        b=min(L)
        res=(b-a)-1
        if res<=0:
            res=-1
        else:
            res=res
    else:
        res=-1
    print(res)
    L.clear()
    R.clear()
