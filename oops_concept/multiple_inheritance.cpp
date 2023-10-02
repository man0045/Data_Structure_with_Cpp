#include<iostream>
using namespace std;
 class Animal{
    public:
    int age;
    int  weight;


    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
 };
 class Dog : public Animal {

 };
 class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }

 };
  class Germansheford: public Animal{

 };
 class Hybrid: public Animal, public Human{

 };
 int main(){
    Hybrid obj1;
    obj1.speak();
    obj1.bark();
    
    return 0;
 }
