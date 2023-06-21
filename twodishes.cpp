#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,t,i;
   cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>n>>a>>b>>c;

  if(a+c>=n && b>=n)
  cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}