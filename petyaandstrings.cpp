#include <iostream>

using namespace std;
int main()
{

    string a,b;
    int i;
    cin>>a>>b;

    for(i=0;i<a.length();i++)
    {
        a[i]=toupper(a[i]);
        b[i]=toupper(b[i]);
    }
    if(a<b)
    {
        cout<<"-1";
    }
    if(a>b)
    {
        cout<<"1";
    }
    if(a==b)
    {
        cout<<"0";
    }
}
