#include<iostream>
using namespace std;
// it is a compiletime polymorphism
class A{
    public:
    void sayHello(){
        cout<<"Hello mannu"<<endl;
    }
};
class B{
    public:
    int sayHello(string name, int n){
        cout<<"Hello mannu"<<endl;

        return n;
    }
};
class C{
    public:
    void sayHello(string name){
        cout<<"Hello mannu"<<endl;
    }
};
int main(){
    A obj;
    obj.sayHello();

    return 0;
}