#include <iostream>
using namespace std;
int main()
{
    int n,i,x=0;
    string a[151];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]=="X++" || a[i]=="++X")
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x;
}
