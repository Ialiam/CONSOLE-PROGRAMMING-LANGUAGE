#include<iostream>
using namespace std;
int main()
{
    int a[10], i;
    cout>>"Enter 10 integers:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
