n=1000000
seive=[False,False]+[True]*(n-1)
a=[]
for i in range(2,n+1):
    if seive[i]:
        a.append(i)
    for j in range(i*2,n+1,i):
        seive[j]=False #1,000,000보다 작은 소수 리스트 a 만들었음
        
p=0
q=len(a)-1
while True:
    n=int(input())
    while p<=q:
        if n == a[p]+a[q]:
            print(n, "=", a[p], "+", a[q] ) 
            break;
        else:
            q=q-1
            if n == a[p]+a[q]:
                print(n, "=", a[p], "+", a[q] ) 
                break;
            else:
                p=p+1
                if n == a[p]+a[q]:
                    print(n, "=", a[p], "+", a[q] ) 
                    break;
    if n==0:
        break


    
   
