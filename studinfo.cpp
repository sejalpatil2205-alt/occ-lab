#include<iostream>
using namespace std;

class Student
{

private:

 char name[20];
 int rollNo;
 float marks;

public:

void inputDetails()
{
 
cout<<" enter Students Name: ";
cin>>name;

cout<<" enter Roll Number: ";
cin>>rollNo;

cout<<" enter Marks: ";
cin>>marks;

}

void displayDetails()
{
cout<<" Student Name: "<<name<<endl;
cout<<" Roll Number: "<<rollNo<<endl;
cout<<" Marks: "<<marks<<endl;

  }

};

int main()
{
Student studentObj;
studentObj.inputDetails();
}
 

  

 




