#include<iostream>
using namespace std;
class helloworld{
    public:
    //constructor
    helloworld(){
        cout<<"constructor is called"<<endl;
    }
    ~helloworld(){
        cout<<"Destructor is called"<<endl;
    }
    void display(){
        cout<<"Hello    World!"<<endl;
    }
};
int main(){
    helloworld obj;
    obj.display();
    return 0;
}