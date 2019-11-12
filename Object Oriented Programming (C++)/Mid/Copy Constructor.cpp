#include<iostream>
using namespace std;
class Rectangle
{
private:
    int height;
    int width;
public:
Rectangle()
{
    height = 1;
    width = 1;
}
Rectangle(int a, int b)
{
    height = a;
    width = b;
}
Rectangle(const Rectangle &rt)
{
    height = rt.height;
    width = rt.width;
}
int area()
{
    int area;
    area = height*width;
    return area;
}
void print()
{
    cout<<"Rectc height:"<<height<<"Rectc width:"<<width<<endl;
}
};

int main()
{
    Rectangle rect(3, 2);
    Rectangle rectc(rect);

    rectc.print();

		cout<<"Rectc Area: "<<rectc.area();
}
