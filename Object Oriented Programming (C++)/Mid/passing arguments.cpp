#include<iostream>
using namespace std;
void change(int x, int y)
{
    x=150;
    x=250;
    cout<<"In change function after changing the values."<<endl<<"x:"<<x<<" y:"<<y<<endl;
}
int main()
{
    int x=20,y=30;
    cout<<"In main function before calling the function."<<endl<<"x:"<<x<<" y:"<<y<<endl;
    change(x, y);
    cout<<"In main function after returning from change from change function."<<endl<<"x:"<<x<<" y:"<<y<<endl;
    return 0;
}
