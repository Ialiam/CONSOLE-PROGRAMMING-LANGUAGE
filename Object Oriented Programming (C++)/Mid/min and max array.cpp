#include<iostream>
using namespace std;
int main()
{
    int a[10], i, j, maxx, minn, index, index2;
    cout<<"Enter 10 integers:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    maxx=a[0];
    for(i=0;i<10;i++)
    {
        if(maxx<a[i])
        {
            maxx=a[i];
        }
    }
    cout<<endl<<"Max array element is:"<<maxx<<endl;
    minn=a[0];
    for(j=0;j<10;j++)
    {
        if(minn>a[j])
        {
            minn=a[j];
        }
    }
    cout<<endl<<"Min array element is:"<<minn<<endl;
    return 0;
}

