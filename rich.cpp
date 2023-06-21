#include <iostream>
using namespace std;
int main()
{
    int t,a,b,x,c=0,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>a>>b>>x;
    while(a<b)
    {
        a=a+x;
        c++;
    }
    cout<<c<<endl; 
    c=0;  
    }
}