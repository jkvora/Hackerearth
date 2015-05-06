#include <bits/stdc++.h>
using namespace std;
char a[1000001],b[1000001];
int main()
{
	int t,i,j,k,temp1,temp2,temp;

	
    cin>>t;
    while(t--)
    {
    	cin>>a;
    	cin>>b;
    	for(i=0;i<max(strlen(a),strlen(b));i++)
    	{
    		if(i<strlen(a))
    		temp1=a[i]-'0';
    		else
    		temp1=0;
    		
    		if(i<strlen(b))
    		temp2=b[i]-'0';
    		else
    		temp2=0;
    		
    		temp=temp1+temp2;
    		cout<<temp;
    		
    	
    	}
    	cout<<endl;
    	
    }
    return 0;
}
