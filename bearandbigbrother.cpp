#include <iostream>
using namespace std;
int main()
{
    int a , b, cnt=0, i;
    cin>>a>>b;
    while(a<=b)
    {
        a=3*a;
        b=2*b;
        cnt++;
    }
    cout<<cnt;

}
