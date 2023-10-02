#include <iostream>
using namespace std;
int main()
{
int i,n,a[50],k,cnt=0;
cin>>n;
cin>>k;
for(i=1;i<=n;i++)
{
    cin>>a[i];
}
for(i=1;i<=n;i++)
{
    if(a[i]>0)
    {
    if(a[i]>=a[k])
    {
        cnt++;
    }
    }
}
cout<<cnt;

}
