#include <iostream>
using namespace std;
class Student
{
    // access
public:
    // con
    string name;
    Student(string n)
    {
        cout << "This is a " << n<<"\n";
    }
    // dec 
      ~Student()
    {
        cout << "student is bye " ;
    }
};
int main()

{

    // obj create
    Student s1("Mahi");

    return 0;
}