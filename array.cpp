#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int p,q,a[5],i;
    cin>>p>>q;
    for(i=0;i<p;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<q;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
