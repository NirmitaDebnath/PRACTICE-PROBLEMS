#include <iostream>
using namespace std;
int main()
{
int t,n,c,r,i;
cin>>t;
for(i=1;i<=t;i++)
{
    cin>>n;
   r=n%4;
   c=n/4;
   if(r>=2)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}
}