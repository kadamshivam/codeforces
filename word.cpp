#include <iostream>
using namespace std;
int main()
{
    int i,cntsmall=0,cntcapital=0;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>=97 && s[i]<= 122)
        {
             cntsmall++;
        }
        if(s[i]>=65 && s[i]<=92)
        {
            cntcapital++;
        }
    }
    for(i=0;i<s.length();i++)
    {
     if(cntcapital>cntsmall)
     {
         if(s[i]>=97 && s[i]<= 122)
        {
             s[i] = s[i] - 32;
        }

     }
     if(cntsmall>=cntcapital)
     {

        if(s[i]>=65 && s[i]<=92)
          {
            s[i] = s[i] + 32;
          }
     }

    }
    cout<<s;

}
