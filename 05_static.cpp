#include <iostream>
using namespace std;
// class Emp
// {
//     // access 
//     private: 
//     // public:
    
//     int salary;
 

// };

void  fun(){
    static int x = 0; 
    x++;
    cout<<x<<"\n";
}
int main()

{

   
   fun();
   fun();

   fun();



    return 0;
}