#include <iostream>
using namespace std;
int main()
{
    int i,j,n,t;
    char s[100];
    cin>>n>>t;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    while(t!=0)
    {
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(s[i]== 'B' && s[j]== 'G')
                {
                    s[i]= 'G';
                    s[j]= 'B';
                    i=i+2;
                    j++;
                }
             else
                {
                i++;
                }

        }

    }
    t--;
    }

    for(i=0;i<n;i++)
    {
        cout<<s[i];
    }

}
