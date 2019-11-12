#include<iostream>
using namespace std;
struct myclass
{
private:
    int data;
public:
    myclass(int data1)
    {
        data = data1;
    }
    void print()
    {
        cout<<data;
    }
};
int main()
{
    myclass c1(55);
    c1.print();
}
