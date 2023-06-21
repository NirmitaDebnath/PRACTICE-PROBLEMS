#include <iostream>
using namespace std;
int main()
{
    int t,a,b,i;
   cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>a>>b;
    if(a>0 && b>0)
    {
        cout<<"Solution"<<endl;
    }
   if(b==0)
    {
        cout<<"Solid"<<endl;
    }
    if(a=0)
    {
        cout<<"Liquid"<<endl;
    }
    }
}