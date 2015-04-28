#include <iostream>
using namespace std;

int main()
{
	int t ,n,count,j,i,k,temp;
    cin>>t;
    while(t--)
    {cin>>n;
    count=0;
    for(i=0;i<n;i++)
    {
    	cin>>temp;
    	if(temp>0)
    	count++;
    }
    	
    cout<<count<<endl;	
    	
    }
    
    return 0;
}
