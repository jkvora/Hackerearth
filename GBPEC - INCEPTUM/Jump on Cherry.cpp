#include <iostream>
using namespace std;

int main()
{
	long long int t,x,y,i,j,k,num,tempx;
    cin>>t;
    while(t--)
    {
    	cin>>x;
    	cin>>y;
    	num=x+y;
    	tempx=x;
    	for(i=0;;i++)
    	{
    		x=tempx*(i+1);
    		if(x%num==0)
    		break;
    	
    	//	cout<<x<<" "<<num;
    		
    	}
    	cout<<i+1<<endl;
    	
    	
    }
    
    
    return 0;
}
