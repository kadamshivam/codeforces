#include <iostream>
using namespace std;
int main()
{
    string s,t;
    char ans[100];
    int i,j=0,cnt=0;
    cin>>s>>t;
    for(i=(s.length()-1);i>=0;i--)
    {
        ans[j] = s[i];
        j++;
    }
     for(j=0;j<s.length();j++)
    {
        if(t[j] == ans[j])
        {
            cnt++;
        }
    }
    if(cnt==s.length())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}
