#include <iostream>
using namespace std;
class Animal {
public:
       virtual void makeSound() {
  cout << " animal Some generic sound\n";
    }
};




class Dog : public Animal {
public:
    void makeSound() {
     cout << "Dog woof!\n";
    }
};
int main() {

    // pointer obj 
    Animal* a1;
    //  dog  obj 
      Dog d1;
     a1=&d1;f
    a1->makeSound();
   return 0;
}
