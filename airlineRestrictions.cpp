#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
     int a,b,c,d,e,s;
for(i=1;i<=t;i++)
{   
    cin>>a>>b>>c>>d>>e;
  if (((a+b)<=d && c<=e) ||((a+c)<=d && b<=e) || ((c+b)<=d && a<=e))
  {
       cout<<"YES"<<endl;
  }
  else{
       cout<<"NO"<<endl;
  }
  
}

}