#include <iostream>
using namespace std;
int main()
{
int n,i,m,q;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>m;
q=m%4;
if(q==0){
cout<<"NORTH"<<endl;
}
else if (q==1)
{
    cout<<"EAST"<<endl;
}
else if (q==2)
{
  cout<<"SOUTH"<<endl;
}
else if (q==3)
{
    cout<<"WEST"<<endl;
}



}
}
