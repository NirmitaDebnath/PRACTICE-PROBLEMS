#include <iostream>
using namespace std;
int main()
{
int n1,n2,r,sum=0,i;
cin>>n1;
for(i=1;i<=n1;i++)
{
cin>>n2;
while(n2!=0)
{
    r=n2%10;
    n2=n2/10;
    sum=sum+r;
}
cout<<sum<<endl;
sum=0;
}
}
