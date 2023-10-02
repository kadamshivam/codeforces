#include <iostream>
using namespace std;
int main()
{
    int n,i,a[1000],b[1000],c[1000],cnt=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==1 && b[i]==1 || b[i]==1 && c[i]==1 || a[i]==1 && c[i]==1 || a[i]==1 && b[i]==1 && c[i]==1)
        {
            cnt++;
        }

    }
    cout<<cnt;
}
