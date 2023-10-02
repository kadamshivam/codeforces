#include <iostream>
using namespace std;
int main()
{
    int i,x,a[100],b[100],cnt=0;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<x;i++)
    {
        if(b[i]-a[i]>=2)
        {
            cnt++;
        }
    }
    cout<<cnt;


}
