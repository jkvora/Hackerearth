t=input()
for i in range(t):
	a=raw_input();
	count=0;
	
	a=list(a.split(' '))
#	print a
	for j in range(len(a)):
		if(a[j]!=''):
			count+=1
	print count
