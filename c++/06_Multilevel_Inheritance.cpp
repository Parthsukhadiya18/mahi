// Multilevel Inheritance
#include<iostream>
using namespace std;
// class create 
class Animal
{

public:
    void eat(){
        cout<<"HI Animal eat \n";
    }
};
// one class to second class inheritance : 
class Dog : public Animal{
    public:
    void bark(){
        cout<<"bark soung \n";
    }
};
class Labra:public Dog{
    public:
    void color(){
        cout<<"it's color red";
    }
};


int main(){
    // create object 
//    Animal a1;
//    a1.eat();
//    Dog d1;
//    d1.eat();
//    d1.bark();

Labra l1;
l1.eat();
l1.bark();
l1.color();

}