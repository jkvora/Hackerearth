#include <iostream>
using namespace std;
	int a[1000001],sum[1000001];
int main()
{
	int t,n,i,j,k;

    cin>>t;
    while(t--)
    {
    	
    	cin>>n;
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    		if(i==0)
    		{sum[i]=a[i];continue;}
    		sum[i]=sum[i-1]+a[i];
    		
    	}
    	k=0;
    	
    	for(i=0;i<(n-1);i++)
    	{
    		if(i==0)
    		continue;
    		if(i==(n-1))
    		{
    				if(sum[i-1]==(sum[n-1]))
    				k=1;
    			break;
    		}
    		if(sum[i-1]==(sum[n-1]-sum[i]))
    		{k=1; break;}
    		
    		
    	}
    	if(n==1)
    	k=1;
    	else if(n==2)
    	if(a[0]==a[1])
    	k=1;
    	
    	
    	if(k)
    	cout<<"YES"<<endl;
    	else
    	cout<<"NO"<<endl;
    	
    	
    }
    
    return 0;
}
