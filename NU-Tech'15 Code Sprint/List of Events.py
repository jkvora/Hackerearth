t=input()
for i in range(0,t):
	p=raw_input()
	m=[]
	temp=0
	for j in range(0,len(p)):
		if ord(p[j])>48 and ord(p[j])<=57:
			
			for k in range(0,int(p[j])-1):
				for l in range(0,temp):
					m.append(m[l])
			temp=temp+(int(p[j])-1)*temp		
					
		else:
			m.append(p[j])
			temp+=1
	print ''.join(m)