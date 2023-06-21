#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double n,m,a;
    cin>>n >> m >>a;
    long long firstlineflagstones=ceil(n/a);
    long long  interactionlength=ceil(m/a);
    long long result =firstlineflagstones * interactionlength;
    cout<<result<<endl;
}