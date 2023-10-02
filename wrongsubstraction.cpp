#include <iostream>
using namespace std;
int main()
{
    int n,w,i=0;
    cin>>n>>w;
    while(i<w)
    {
    if(n%10== 0)
    {
        n=n/10;
    }
    else
    {
    n=n-1;
    }
    i++;
    }
    cout<<n;
}
