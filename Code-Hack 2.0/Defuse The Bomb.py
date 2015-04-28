t=input()
for i in range(0,t):
	p=raw_input()
	a,b=[j for j in p.split()]
	for j in range(0,len(a)-len(b)+1):
		temp=a[j:len(b)+j]
		print int(b)*int(temp)
	