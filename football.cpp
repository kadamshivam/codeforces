#include <iostream>
using namespace std;
int main()
{
    string s;
    int i,cnt1=0,cnt2=0,cnt3=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            cnt2=0;
            cnt1++;
            if(cnt1 >= 7)
            {
                cnt3++;
            }
        }
        if(s[i]=='0')
        {
            cnt1=0;
            cnt2++;
             if(cnt2 >= 7)
             {
                cnt3++;
             }

        }
    }
    if(cnt3>0)
    {
        cout<<"YES";

    }
    else
    {
        cout<<"NO";
    }


}
