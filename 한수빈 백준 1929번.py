M,N=map(int, input().split())
for x in range(M,N+1): #M부터 N까지 반복 x는 M의 변수
    if x==1:            #1은 건너뜀
        continue 
    for y in range(2,x-1): #M자기 자신보다 1작은수까지 반복해서 나머지 0이면 멈춤
        if x%y==0:
            break;
    else:
         print(x)
