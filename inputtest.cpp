#include <iostream>
using namespace std;
int main()
{
    int n,k,a,c=0,i;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
    cin>>a;
    if(a%k==0)
    {
        c++;
    }
    }
    cout<<c<<endl;
}