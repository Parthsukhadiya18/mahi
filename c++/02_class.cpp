#include <iostream>
using namespace std;

// class create
class Student
{
    //   acces to member
public:
    int Id;
    string name;
};
class Admin
{
};
class Teacher
{
};
class language
{
};
class Book
{
};
int main()
{

    // obj crete
    Student s1;
    s1.Id = 10,
    s1.name = "parth";
    cout << "ID=" << s1.Id << "\n";
    cout << "Name=" << s1.name<<"\n";



     Student s2;
    s2.Id = 11,
    s2.name = "sparsh";
    cout << "ID=" << s2.Id << "\n";
    cout << "Name=" << s2.name<< "\n";

    return 0;
}