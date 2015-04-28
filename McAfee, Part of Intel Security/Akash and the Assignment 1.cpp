#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std;
char s[1000001];
int a[50005][26];
int ans[26];

int main()
{
	int n,q,i,j,k,temp,l,r;
    cin>>n;
    cin>>q;
    
  
  string s;
	cin>>s;
	for(int i=0;i<26;i++)
		a[0][i]=0;
	for(int i=0;i<s.size();i++)
	{
		int d=s[i]-'a';
		for(int j=0;j<26;j++)
			a[i+1][j]=a[i][j];
		a[i+1][d]=a[i][d]+1;
	}

for(i=0;i<q;i++)
{
	
	cin>>l;
	cin>>r;
	cin>>k;
	
	if(k>(r-l+1))
			cout<<"Out of range"<<endl;
	else
	{
	
	for(j=0;j<26;j++)
	ans[j]=a[r][j]-a[l-1][j];// cout<<ans[j]<<" ";}

	for(j=0;j<26;j++)
    	{
    		
    	
    				k=k-ans[j];
				if(k<=0)
    					{printf("%c\n",j+97); break;}
    		
    					
    	}

	}

	
}


    return 0;
}
