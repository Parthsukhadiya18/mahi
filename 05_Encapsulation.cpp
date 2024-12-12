#include <iostream>
using namespace std;
class Emp
{
    // access 
    private: 
    
    int salary;
    // encapsulation  sensitive data hide
    public:
    void setSalary(int s){
       salary=s;
    }


    int getSalary(){
        return salary;
    }

 

};
int main()

{

//    cfreate obj 
    Emp E1;
    E1.setSalary(10000);

    cout<<E1.getSalary();
    return 0;
}