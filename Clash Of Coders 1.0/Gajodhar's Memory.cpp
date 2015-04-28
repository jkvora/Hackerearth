#include <iostream>
using namespace std;
int a[26];

int main()
{
	int t,i,k,j,count,n;
	char s[100000];
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	count=0;
    	for(i=0;i<n;i++)
    	{
    		cin>>s;
    		
    			a[s[0]-'A']++;
    
    		
    	}
    		for(j=0;j<26;j++)
    		{
    			if(a[j]==1)
    			count++;
    			
    			a[j]=0;
    			
    			
    		}
    	cout<<count<<endl;
    	
    }
    return 0;
}
