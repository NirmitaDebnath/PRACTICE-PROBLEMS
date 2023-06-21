#include <iostream>
using namespace std;
int main()
{
    int t,j,n,l,i,s=0;
    cin>>t;
    for(j=1;j<=t;j++)
    {
    cin>>n;
    l=n%10;
    n=n/10;
   while(n!=0)
   {
       i=n%10;
       n=n/10;
   }
   s=i+l;
   cout<<s<<endl;
    }
    
}