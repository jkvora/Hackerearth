#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,temp;
    char a[100000];
    long long int ans;
    scanf("%d",&n);
    	ans=0;
    for(i=0;i<n;i++)
    {
    	scanf("%s",a);
    	//printf("%s %d\n",a,strlen(a));
    	for(j=0;j<strlen(a);j++)
    	ans=ans+a[j]-'0';
    
    	
    }
    	if(ans>=0 && ans<=9)
    	{
    		printf("%lld\n",ans);
    	
    	}
    	else
    	{
    		while(ans>=9)
    		{
    			temp=ans;
    			ans=0;
    			while(temp!=0)
    			{
    				ans=ans+temp%10;
    				temp=temp/10;
    			}
    		}
    		printf("%lld\n",ans);
    	}
    
    return 0;
}
