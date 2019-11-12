#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    ofstream fwrite("myFirstFile.txt");\
    if(fwrite.is_open())
    {
        fwrite<<"Printing files";
        for(int i=0; i<5;i++)
        {
            fwrite<<arr[i]<<endl;
        }
    }
    else
        cout<<"File does not exist"<<endl;
    return 0;


}
