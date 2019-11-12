#include<iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout<<"Constructor is called\n";
    }
    ~test()
    {
        cout<<"destructor is called\n";
    }
};
int main()
{
    test();
    test t1;
    t1.~test();
}
