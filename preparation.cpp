#include <iostream>
using namespace std;
int main()
{
    int t,m,n,k,i,j;
   cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>m>>n>>k;
    j=k*n;
    if(m>j)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
}