#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
double y,z;
double x,r;
cin>>x>>y;
z=y-0.5;
r=remainder(x,5);
if(x>z || r!=0)
{
   cout<<setprecision(2)<<fixed;
   cout<<y<<endl;
}
else
{
    y=y-x-0.5;
    cout<<setprecision(2)<<fixed;
    cout<<y<<endl;
}

}