#include<iostream>
using namespace std;
class Student{

	private:
		string name;
		int id;
	public:
		void setName(string nm);
		void setID(int i);

		string getName();
		int getID();
};

void Student::setName(string nm){
	name = nm;
}

void Student::setID(int i){
	id = i;
}

string Student::getName(){
	return name;
}

int Student::getID()
{ return id;
	}


int main(){
	Student s[3];
	string name;
	int id, i;

	for(i=0;i<3;i++)
        {
		cout << "Enter name and id for student s" << i <<":" << endl;
		cin >> name >> id;
		s[i].setName(name);
		s[i].setID(id);
	}

	for(i=0;i<3;i++)
        {
		cout << "Name and id of student s"<< i <<":" << endl;
		cout<< s[i].getName() << endl << s[i].getID() << endl;
	}
	return 0;

}
