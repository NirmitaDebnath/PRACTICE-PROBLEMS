#include <iostream>
using namespace std;
int main()
{
    int a,b,r=0,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>a>>b;
    r=a%b;
    cout<<r<<endl;
    r=0;
    }
}