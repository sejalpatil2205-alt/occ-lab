#include<iostream>
using namespace std;
class student
{
public:
   int age;
   student()
{
age=20;
}
void display()
{
cout<<"age="<<age<<endl;
}
};
int main()
{
student s;
s.display();
return 0;
}
