#include <iostream>
using namespace std;
int main()
{
int i,j,a[6][6],k;
for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        cin>>a[i][j];
    }

}

for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        if(a[i][j]==1)
        {
            if(i<=3 && j<=3)
            {
                k=(3-i)+(3-j);
            }
            if(i<=3 && j>=3)
            {
                k=(3-i)+(j-3);
            }

            if(i>=3 && j<=3)
            {
                k=(i-3)+(3-j);
            }

            if(i>=3 && j>=3)
            {
                k=(i-3)+(j-3);
            }
        }
    }

}
cout<<k;
}
