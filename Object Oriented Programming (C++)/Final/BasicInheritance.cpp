#include<iostream>
using namespace std;
class Person
{
    string name;
    double fuelLevel;
public:
    void setName(string nm)
    {
        name=nm;
    }
    string getName()
    {
        return name;
    }
};
class Student:public Person
{
    string dept;
public:
    void setDept(string dp)
    {
        dept=dp;
    }
    string getDept()
    {
        return dept;
    }
};
class Teacher:public Person
{
    string faculty;
public:
    void setFaculty(string fac)
    {
        faculty=fac;
    }
    string getFaculty()
    {
        return faculty;
    }
};
int main()
{
    Teacher t1;
    Student s1;
    t1.setName("XYZ");
    t1.setFaculty("CS");
    s1.setName("ABC");
    s1.setDept("CSE");
    cout<<"Teacher's Name: "<<t1.getName()<<" Faculty: "<<t1.getFaculty()<<endl;
    cout<<"Student's Name: "<<s1.getName()<<" Department: "<<s1.getDept()<<endl;
}
