#include<iostream>
using namespace std;
class Lion{
public:
    void Speak() {
        cout << "animal is Speak\n";
    }
};


class Tiger{
public:
     void color() {
        cout << "color is yellow and black\n";
    }


};


class Liger: public Lion, public Tiger{
public:
    void eat() {
        cout << "liger is eat dear\n";
    }
};


int main() {
    Liger Li;
    Li.eat();  
    Li.color();
    Li.Speak();
       return 0;
}

