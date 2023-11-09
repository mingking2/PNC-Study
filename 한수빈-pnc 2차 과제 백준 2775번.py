def house(k,n):
    if k == 0:
        return n
    elif n == 1:
        return 1
    else:
        return (house (k,n-1) + house(k-1,n))
        
T = int(input())
for x in range(T):
        k = int(input())
        n = int(input())
print(house(k,n))
