#include<iostream>
using namespace std;
class Vehicle
{
    string engine;
    double fuelLevel;
public:
    void setFuelLevel(double level)
    {
        fuelLevel=level;
    }
    void setEngineConfig(string engineconf)
    {
        engine=engineconf;
    }
    double getFuelAmount()
    {
        return fuelLevel;
    }
    string getEngineConfig()
    {
        return engine;
    }
};
class Car:public Vehicle
{
    int noOfDoors;
public:
    Car(){}
    Car(int doors)
    {
        noOfDoors=doors;
    }
    int getDoors()
    {
        return noOfDoors;
    }
};
class SedanCar:public Car
{
    string bootCapacity;
public:
    void setBootCapacity(string capacity)
    {
        bootCapacity=capacity;
    }
    string getBootCapacity()
    {
        return bootCapacity;
    }
};
int main()
{
    SedanCar cs1;
    cs1.setFuelLevel(90);
    cs1.setEngineConfig("Sports");
    cs1.setBootCapacity("Small");
    cout<<"Fuel Level: "<<cs1.getFuelAmount()<<"Engine Config: "<<cs1.getEngineConfig()<<"Boot Capacity: "<<cs1.getBootCapacity()<<endl;
}
