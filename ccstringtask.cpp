#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        s[i]=(char)tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            cout<<"";
        }
        else
        {
            cout<<"."<<s[i];
        }

    }
}
