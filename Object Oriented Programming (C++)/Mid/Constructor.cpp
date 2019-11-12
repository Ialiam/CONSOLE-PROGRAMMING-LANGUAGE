#include<iostream>
using namespace std;
class Rectangle
{
private:
    int height;
    int width;
public:
    Rectangle();
    Rectangle(int a, int b);
    int area();
};
Rectangle::Rectangle()
{
    height = 1;
    width = 1;
}
Rectangle::Rectangle(int a, int b)
{
    height = a;
    width = b;
}
int Rectangle::area()
{
    int area;
    area = height*width;
    return area;
}
int main()
{
    Rectangle r1(3, 4), r2;

    cout<<" R1 Area: "<<r1.area()<<endl<<"R2 Area: "<<r2.area();
}
