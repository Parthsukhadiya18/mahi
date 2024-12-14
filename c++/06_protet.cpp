#include<iostream>
using namespace std;


class Employee {
  protected: 
    int salary;
};
class Personer: public Employee {
  public:
        void setSalary(int s) {
  	salary = s;
    } 
   int getSalary() {
      return salary;	}
};
int main() {
  Personer myObj;
  myObj.setSalary(50000);
  cout << "Salary: " << myObj.getSalary() << "\n";
   return 0;
}
