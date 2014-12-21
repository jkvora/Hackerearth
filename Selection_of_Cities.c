#include <stdio.h>
 
long long int fast_pow(int a,long long int n)
{
	
long long int result=1;
long long int power=n;
long long int value=a;
 
while(power>0)
{
	if(power&1)
	{
		
		result=result*value;
		result=result%1000000007;
		
	}
	value=value*value;
	value=value%1000000007;
	power=power/2;
	
	
	
}
 
return result;
 
}
 
 
 
 
int main()
{
    //printf("Hello World!\n");
    int i,j,t;
    long long int ans,n;
    
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    	scanf("%lld",&n);
    	
    	ans=fast_pow(2,n);
    	printf("%lld\n",ans-1);
    	
    	
    	
    	
    	
    }
    
    
    
    
    
    return 0;
}
