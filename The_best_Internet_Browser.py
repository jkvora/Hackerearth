t=input()
for i in range(0,t):
    s=raw_input()
    to=len(s)
    m=s.split('.')
    count=0
    for j in range(1,len(m)-1):
        ca=m[j].count('a')
        ce=m[j].count('e')
        ci=m[j].count('i') 
        co=m[j].count('o')
        cu=m[j].count('u')
        count=count+len(m[j])-ca-ce-ci-co-cu
        
        count=count+1
    count=count+3
    print '%d/%d'%(count,to)
Language: Python
