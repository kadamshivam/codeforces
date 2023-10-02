#include <iostream>
using namespace std;
int main()
{
    string a[200];
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
     for(i=1;i<=n;i++)
    {
        if(a[i].length()>10)
        {
            cout<<a[i][0]<<a[i].length()-2<<a[i][a[i].length()-1]<<"\n";
        }
        else
        {
            cout<<a[i]<<"\n";
        }
    }

}
