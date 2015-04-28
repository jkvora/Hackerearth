#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int x,y,z,temp,temp2,temp3,temp4,temp5,temp6,ans;
    cin>>x;
    cin>>y;
    cin>>z;
    
    temp=x*y*z;
    temp2=(x+y)*z;
    temp3=x+y*z;
    temp4=x*y+z;
    temp5=x*(y+z);
    temp6=x+y+z;
   
   
   ans=max(temp,max(temp2,max(temp3,max(temp4,max(temp5,temp6)))));
   cout<<ans;
   
    return 0;
}
