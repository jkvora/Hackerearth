#include <iostream>
#include<string>
using namespace std;
int a[26];
int main()
{
	int t,i,j,k,count;
	string s;
    cin>>t;
    while(t--)
    {
    	cin>>s;
    	for(i=0;i<s.size();i++)
    	{
    		
    		a[s[i]-'a']++;
    		
    	}
    	
    	count=0;
    	for(i=0;i<26;i++)
    	{
    		if(a[i]>0)
    		count++;
    		
    		a[i]=0;
    		
    	}
    	
    	cout<<count<<endl;
    	
    }
    return 0;
}
