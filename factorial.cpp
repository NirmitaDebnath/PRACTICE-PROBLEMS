#include <iostream>
using namespace std;
int main()
{
    int t,n,i,j;
    long long int p=1;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>n;
    for(j=1;j<=n;j++)
    {
        p=p*j;
    }
    cout<<p<<endl;
    p=1;
    }
}