#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>0)
    {
        cout<<"Postive number";
    }
    else
    if(a<0)
    {
        cout<<"Negative number";
    }
    else
    {
        cout<<"Given value is zero";
    }
    return 0;
}
