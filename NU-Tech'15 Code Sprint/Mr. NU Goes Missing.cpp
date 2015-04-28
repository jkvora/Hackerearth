#include<bits/stdc++.h>
using namespace std;

int ans[10001];

int isprime(long long int n)
{
	if(n%2==0)
	return 0;
	
	for(int i=3;i<=sqrt(n);i=i+2)
	{
		if(n%i==0)
		return 0;
		
		
	}
	
return 1;

	
}

void generate()
{
	int sum=0,a=2,b=4,s=6,p=3;
	int n=3;
	while(n<=10000)
	{
		if(isprime(p))
		sum++;
		
		p=p+a;
		if(isprime(p))
		sum++;
		
		p=p+a;
		if(isprime(p))
		sum++;
		
		a=a+2;
		p=p+s;
		s=s+4;
		
	//	cout<<sum<<" ";
		ans[n]=sum;
		
		
		
		n=n+2;
	}
	
	
}





int main()
{
	int t,i,j,k,n;
	double p;
	generate();
	cin>>t;
	while(t--)
	{
		cin>>n;
		p=(double)ans[n]/(2*n-1)*100;
		printf("%8.6lf\n",p);
		
		
	}
	
	
	
	return 0;
}