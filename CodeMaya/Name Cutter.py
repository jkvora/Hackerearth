t=input()
for i in range(t):
	a=raw_input();
	a=list(a.split(' '))

	for i in range(len(a)):
		if(i==(len(a)-1)):
			print a[i]
		else:
			print a[i][0]+".",
		