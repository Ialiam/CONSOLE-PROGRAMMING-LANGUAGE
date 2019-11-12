#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ifstream fread("alphabet.txt");
    ofstream fvow("vowel.txt");
    ofstream fcons("cons.txt");
    char x;
    if(fread.is_open() && fvow.is_open() && fcons.is_open())
    {
        while(1)
        {
            fread>>x;
            if(fread.eof())
                break;
            if(x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U')
                fvow<<x;
            else
                fcons<<x;
        }
        fread.close();
        fvow.close();
        fcons.close();
    }
    else
        cout<<"File does not exist" << endl;
    return 0;
}
