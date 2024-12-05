#include<iostream>
using namespace std;
class Calculter{
public:
int a,b;
int add(int a,int b){
    return a+b;
}

};

int main(){

 Calculter C1;
//  C1.add(10,20);
 cout<<C1.add(10,20);

    return 0;
}