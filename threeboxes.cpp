#include <iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,i;
   cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>a>>b>>c>>d;
    if((a<=d) && (a+b)>d)
    {
        cout<<"3"<<endl;
    }
   else if((a+b)<=d && (a+b+c)>d)
    {
        cout<<"2"<<endl;
    }
   else
    {
        cout<<"1"<<endl;
    }
    }
}