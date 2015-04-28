#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int t,i,j,k,sum,temp,n,m;
	int a[100001];
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	
    	cin>>m;
    	for(i=0;i<m;i++)
    	cin>>a[i+n];
    	
    	sort(a,a+n+m);
    	
    //	cout<<a[0]<" ";
    	for(i=0;i<n+m;i++)
    	{
    		temp=a[i];
    		cout<<a[i]<<" ";
    		while(temp==a[i])
    		i++;
    		
    		i--;
    		
    		
    	}
    	
    	cout<<endl;
    	
    }
    return 0;
}