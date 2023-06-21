#include <iostream>
using namespace std;
int main()
{
    int t,x,y,z,i,j=0;
   cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>x>>y>>z;
    j=z*2;
    if((x+j)>=y)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    j=0;
    }
}