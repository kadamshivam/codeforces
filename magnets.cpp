#include<iostream>
using namespace std;
int main()
{
    int n,i,j,cnt=0;
    cin>>n;
    int s[100000];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        j=i+1;
        if(s[i]!=s[j])
        {
            cnt++;
        }
    }

    cout<<cnt;
}
