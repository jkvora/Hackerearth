#include <iostream>
#include<math.h>
using namespace std;
int a[100001],b[1000001];
int main()
{
	int i,j,n,m;
	long long int s1,s2;
    cin>>n;
    cin>>m;
    s1=0;
    s2=0;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    	//if(i<min(n,m))
    	s1=s1+a[i];
    }
    for(i=0;i<m;i++)
    {
    	cin>>b[i];
    //	if(i<min(n,m))
    	s2=s2+b[i];
    }
    
    
   
    cout<<s1*s2<<endl;
    return 0;
}
