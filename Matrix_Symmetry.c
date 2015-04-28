#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<math.h>
//#include<strings.h>
 
char a[50][50];
int t,n;
 
void input(void);
void check(void);
 
int  main()
{
     int i;
     scanf("%d",&t);
     
     for(i=0;i<t;i++)
     {
                     
          scanf("%d\n",&n);  
         // printf("\n");         
          input();
          check();
          
     }               
                     
                     
 
    // getch();
     
     return 0;
}
     
void input()
{
     int i,j;
     for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           scanf("%c\n",&a[i][j]);
                     
                     
    
     
     }
 
}
void check()
{
     int i,j,count=0;
     for(i=0;i<ceil((n+1)/2);i++)
    // if(strcmpi(a[i],a[n-i-1])!=0)
    // break;
    {
      
                     for(j=0;j<n;j++)
                     {
                            if(a[i][j]!=a[n-1-i][j])         
                            break;
                      }
     
     if(j!=n)
     break;
     }
     
     if(i==ceil((n+1)/2))
     count=4;
   
     
     
     for(i=0;i<ceil((n+1)/2);i++)
     {
                     
                     for(j=0;j<n;j++)
                     {
                            if(a[j][i]!=a[j][n-1-i])         
                            break;
                      }
     
     if(j!=n)
     break;
     }
      if(i==ceil((n+1)/2))
  
     count++;
     
     if(count==4)
      printf("HORIZONTAL\n");
      else if(count==5)
       printf("BOTH\n");
       else if(count==1)
        printf("VERTICAL\n");
        else
         printf("NO\n");
 
     
     }
