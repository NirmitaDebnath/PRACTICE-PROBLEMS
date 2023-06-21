#include <iostream>
using namespace std;
int main()
{
    int t,n,x,y,s=0,i;
   cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>n>>x>>y;
   s=(n+1)*y;
   if(s>=x)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   s=0;
    }
}