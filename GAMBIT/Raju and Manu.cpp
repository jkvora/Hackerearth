// bitset::count
#include <iostream>       // std::cout
#include <string>         // std::string
#include <bitset>       // std::bitset
#include<math.h>
using namespace std;

int a[18];
int main ()
{
	int t,n,ans,i,j,k,l;
	 bitset<17> foo;
 for(i=1;i<=17;i++)
 {
 	a[i]=pow(2,i)-1;
 	
 }
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;;i++)
		{
			if(a[i]>=n)
			break;

		}
		
		if(a[i]==n)
		{ cout<<n<<endl; continue;}
		else
		{
			
			for(j=n;j>=a[i-1];j--)
			{
				foo=j;
				if(foo.count()==(i-1))
				{ans=j; break;}
				
				
			}
			cout<<ans<<endl;
		}
		
		
		
		
	}
	
	
	

 

  return 0;
}