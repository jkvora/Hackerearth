#include<string.h>
#include <iostream>
using namespace std;
int a[26];
char s[100001];
int main()
{
	int t,i,k,j;
    cin>>t;
    while(t--)
    {
    	
    	cin>>s;
    	for(i=0;i<strlen(s);i++)
    	{
    		a[s[i]-'a']++;
    		
    	}
    	k=0;
    	for(i=0;i<26;i++)
    	{
    		
    		if(a[i]>1)
    		k=1;
    		
    		a[i]=0;
    		
    	}
    	
    	if(k)
    	cout<<"YES"<<endl;
    	else
    	cout<<"NO"<<endl;
    	
    }
    
    return 0;
}
