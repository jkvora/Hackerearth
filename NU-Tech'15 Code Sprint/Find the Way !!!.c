#include<stdio.h>


int main()
{
	int n,i,j,k;
	int a[1000][1000],sol[1000],min;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
            for (i = 0; i < n; i++) 
            {
                sol[i] = a[i][n-1];                
            }
 
 for(i=(n-2);i>=0;i--)
 {
 	
 	sol[0]=sol[0]+a[0][i];
 	
 	
 	for(j=1;j<n;j++)
 	{
 		if(sol[j-1]>sol[j])
 		sol[j]=sol[j]+a[j][i];
 		else
 		sol[j]=sol[j-1]+a[j][i];
 		
 	
 	}



 	for(j=(n-2);j>=0;j--)
 	{
 		if(sol[j]>(sol[j+1]+a[j][i]))
 		sol[j]=sol[j+1]+a[j][i];
 	}
 	

 	
 }
 
 
 
	min=1000000;
	for(i=0;i<n;i++)
	{
		if(sol[i]<min)
		min=sol[i];
	}
	
	printf("%d\n",min);
	
	
return 0;	
}