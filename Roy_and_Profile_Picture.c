#include <stdio.h>
 
int main()
{
	int l,w,h,n,i;
	
    scanf("%d",&l);
    scanf("%d",&n);
    
    
    for(i=0;i<n;i++)
    {
    	scanf("%d",&w);
    scanf("%d",&h);
    
    if(w<l || h <l)
    {
    	printf("UPLOAD ANOTHER\n");
    	
    }
    else if(w!=h)
    {
    	printf("CROP IT\n");
    }
    else
    {
    	printf("ACCEPTED\n");
    }
    
    	
    	
    	
    }
    return 0;
}
