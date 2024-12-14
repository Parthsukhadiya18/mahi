#include <iostream>
using namespace std;
class Add{
public:
       int add(int a, int b) {
        return a + b;
        }
       int add(int a, int b, int c) {
        return a + b + c;
    }
      double add(double a,double b) {
        return a+b;
    }
};
int main() {
    Add a1;
    cout << "Add two integers: " << a1.add(3, 5);
    cout << "\nAdd three integers: " << a1.add(3, 5, 7) ;  
    cout<<"\n Add two double number="<<a1.add(3.52, 2.72);


 return 0;
}
