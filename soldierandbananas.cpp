#include <iostream>
using namespace std;
int main()
{
    int k,n,w,cost=0,temp=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        cost= cost + (i * k);
    }
    if(cost>n)
    {
    cout<< cost - n;
    }
    else
    {
        cout<<temp;
    }
}
