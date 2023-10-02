#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,a[100];
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='+')
        {
            cout<<"";
        }
        else
        {
            s[i]=(int)s[i];
            a[i]=s[i];
            cout<<a[i];

        }
    }


}
