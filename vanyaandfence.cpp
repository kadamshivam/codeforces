#include <iostream>
using namespace std;
int main()
{
    int n,h,a[1000],i,cnt=0;
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            cnt=cnt+2;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt;
}
