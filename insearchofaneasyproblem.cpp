#include <iostream>
using namespace std;
int main()
{
    int x,a[100],i,cnt=0;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<x;i++)
    {
        if(a[i]==1)
        {
            cnt++;
        }
    }

    if(cnt>0)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
}
