

t=input()

for i in range(t):
	n=input()
	a=1
	b=1
	if(n==1 or n==2):
		print "1"
		continue;
	else:
		n=n-2
		while(n):
			c=a+b;
			a=b
			b=c
			
			n-=1
			#print c,
	print c
			
