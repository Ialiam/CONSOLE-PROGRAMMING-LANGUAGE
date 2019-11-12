#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fread("MyFirstFile.txt");
    string x;
    if(fread.is_open())
    {
        while(getline(fread, x))
        {
            cout<<x<<endl;
        }
        fread.close();
    }

}
