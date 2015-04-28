def is_palindromic(n):
	n=str(n)
	for i in range(0,int((len(n)+1)/2)):
		if n[i]!=n[len(n)-i-1]:
			return False
	return True
		
	
	
	

p=raw_input()
a,b = [int(i) for i in p.split()]

start=int(a**0.5)
end=int(b**0.5)
pal = set()

for i in range(1, end-1):
    sos = i*i
    for j in range(i+1, end):
        sos += j*j
        if sos >= b: break
        if  sos>=a and is_palindromic(sos) : pal.add(sos)
        
print sum(pal)