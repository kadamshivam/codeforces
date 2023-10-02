#include <iostream>
using namespace std;
int main()
{
    int x,i,cnt1=0,cnt2=0;
    cin>>x;
    char c[100000];
    for(i=0;i<x;i++)
    {
        cin>>c[i];
    }
    for(i=0;i<x;i++)
    {
        if(c[i]== 'A')
        {
            cnt1++;
        }
        if(c[i]== 'D')
        {
            cnt2++;
        }
    }
    if(cnt1>cnt2)
    {
        cout<<"Anton";
    }
    else if(cnt2>cnt1)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }

}
