
#include<iostream>
using namespace std;


class Animal {
  public:
    void animalSound() {
  	    cout<<"animal sound!\n";
	}
};




class Pig : public Animal {
  public:
    void animalSound() {
       cout<<"pig sound!\n";
	}
};
int main() {
  Pig myPig;
  myPig.animalSound();
  return 0;
}
