#include <stdio.h>

int main()
{
    //printf("Hello World!\n");
    int t,i,j,n,a[100000],m,temp;
    
    
    scanf("%d",&n);
    
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    
    scanf("%d",&m);
    
    
    for(j=0;j<m;j++)
    {
    	scanf("%d",&temp);
    	for(i=0;i<n;i++)
    	{
    		if(a[i]>temp)
    		a[i]--;
    		
    		
    	}
    	
    	
    }
    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
    return 0;
}
