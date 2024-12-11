#include <iostream>
using namespace std;
class Emp
{
    // access 
    public: 
    // con
    
    int salary;
    Emp(int s){
        salary=s;
    }

     int count(){
        return salary;
    }

};
int main()

{

    // obj create
    // Emp E1;
    Emp E1(1000000000);
    cout<<E1.count();

    return 0;
}