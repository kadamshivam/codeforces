#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,no,limit,answer=0,comp=0,sum=0;
    cin>>no;
    int bus_entry[no],bus_exit[no];
    for(i=0;i<no;i++)
    {
        sum=sum+answer;
        cin>>bus_entry[i]>>bus_exit[i];
        answer=bus_exit[i]+(answer-bus_entry[i]);
        if(answer>comp)
        {
            comp=answer;
        }

    }
    cout<<comp;
}
