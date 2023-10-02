#include <iostream>
using namespace std;
int main()
{
    int x, ans,cnt;
    cin>>x;
    if(x%5!=0)
    {
    ans=x%5;
    x=x-ans;
    cnt=x/5;
    cout<<cnt+1;
    }
    else
    {
    cout<<x/5;
    }

}
