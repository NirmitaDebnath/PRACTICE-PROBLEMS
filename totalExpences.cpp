#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int t,i;
double s,q,p;
cin>>t;
for(i=1;i<=t;i++)
{
    cin>>q>>p;
    s=q*p;
    if(q>1000)
    {
        s=s-(s*0.1);
    }
cout<<setprecision(10)<<fixed;
cout<<s<<endl;
}
}