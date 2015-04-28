#include <iostream>
using namespace std;

int main()
{
	int t,count,x,p,temp;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cin>>p;
		
		count=0;
		temp=x;
		if(p==1)
		{count=x; x=0;}
		else
		{
		while(x%p==0 && x!=0)
		{
			count++;
			x=x/p;
		}
		//temp=temp-count*p;
		}
		if(x==1)
		x=0;
		cout<<count<<" "<<x<<endl;
		
	}
    return 0;
}
