#include <iostream>
using namespace std;int main(){int t;cin>>t;while(t--){int k,n;double r=1;cin>>n>>k;for(int i=k+1;i<=n;i++){r*=i;r/=i-k;}long long o=r;cout<<o<<endl;}}
