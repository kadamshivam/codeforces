#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,cnt=s.length();
    for(i=0;i<s.length();i++)
    {
        for(j=i+1;j<s.length();j++)

        {
            if(s[i]==s[j])
            {

                cnt--;
                break;
            }
        }
    }

    if(cnt%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

}
