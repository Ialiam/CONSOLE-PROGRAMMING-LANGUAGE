#include<iostream>
using namespace std;
int main()
{
    int a[10], i, j;
    cout<<"Enter 10 integers:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Even indexed elements:"<<endl;
    for(i=0;i<10;i+=2)
    {
        cout<<a[i]<<"\t";
    }
        cout<<endl<<"Odd indexed elements:"<<endl;
    for(j=1;j<10;j+=2)
    {
        cout<<a[j]<<"\t";
    }
    return 0;
}
