#include<stdio.h>
// bitset::count
#include <iostream>       // std::cout
#include <string>         // std::string
#include <bitset>         // std::bitset
using namespace std;
int main ()
{
	int i,j,t;
	long long int x,y;
	std :: cin>>t;
	for(i=0;i<t;i++)
	{
		std :: cin>>x;
		std :: cin>>y;
		
		 std::bitset<32> foo1=x;
		std::bitset<32> foo2=y;
		
		std::bitset<32> foo3=foo1^foo2;
		
		
 		 std::cout << foo3.count() <<std ::endl;
 
	}


 

  return 0;
}

