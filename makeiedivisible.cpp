#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int t,i;
long long n,j,s;
cin>>t;
for(i=1;i<=t;i++)
{
    cin>>n;

   for(j=pow(10,n-1);j<pow(10,n);j++)
   {
       if(j%3==0 && j%9!=0 && j%2!=0)
       {
       s=j;
      break;
       }
       
   }
   cout<<s<<endl;
}
}