#include <iostream>
using namespace std;
int main()
{
    int d,l,r,t,i;
   cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>d>>l>>r;
   if(d<l)
   {
       cout<<"Too Early"<<endl;
   }
   else if(d>r)
   {
       cout<<"Too Late"<<endl;
   }
   else{
       cout<<"Take second dose now"<<endl;
   }

    }
}