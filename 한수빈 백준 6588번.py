a=[]
for c in range(2,1000001):
    if c==2:
        a.append(2)
    for d in range(1,c-1):
        if c % d == 0:
            break
    else:
        a.append(c) #리스트 1000,000개 만들었음
p=0
q=len[a]
while True:
    n=int(input())
    for f in range(len(a/2)):
        if n == a[p] + a[q]:
            print(n, "=", a[p], "+", a[q] )
            break
        p=p+1
        q=q-1 
    if n==0:
        break
    #6=3+3같은 상황...
   
