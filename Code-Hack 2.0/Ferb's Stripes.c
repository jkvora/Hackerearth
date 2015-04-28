#include <stdio.h>

int main()
{
    int t,i,j,k,temp,n,a[1000]={0},max,freq;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
    	scanf("%d",&n);
    	max=0;
    	freq=0;
    	for(j=0;j<n;j++)
    	{
    			scanf("%d",&temp);
    			a[temp]++;
    			if(temp>max)
    			max=temp;
    			
    	}
    		for(j=0;j<=max;j++)
    	{
    		if(a[j]>freq)
    		freq=a[j];
    		
    		a[j]=0;
    	}
    	
    	if(freq>(n+1)/2)
    	printf("bad luck\n");
    	else
    	printf("can do\n");
    	
    	
    }
    
    
    return 0;
}
