#include <iostream>
using namespace std;
int main()
{
    cout<<"NUMBER OF TRY :";
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x,y;
        cin>>x>>y;
        if (x<y)
        {
            cout<<"*ist*"<<endl;
        }
        else if (y<x)
        {
            cout<<"**2nd**"<<endl;
        }
        else
        cout<<"=same="<<endl;
     }
}