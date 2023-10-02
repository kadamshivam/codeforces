#include <iostream>
using namespace std;
 int main()
 {
     int i,n,cnt=0;
     cin>>n;
     for(i=1;i<n;i++)
     {

     if((n-i)%2==0 && (n-(n-i))%2==0)
     {
        cnt++;

     }
     else
     {

     }

     }
     if(cnt>=1)
     {
         cout<<"YES";
     }
     else
     {
         cout<<"NO";
     }
 }
