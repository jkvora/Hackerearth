import math
 
def prime(n):
    p=int(math.sqrt(n))
    k=1
    for i in range(2,p+1):
        if n%i==0:
            k=0
            break;
    if k==1:
        print n
    return k
        
t=input()
for i in range(0,t):
    n=input()
    n=n+1
    while(not(prime(n))):
        n=n+1
    