#include<iostream>
using namespace std;
class Human{
    public :
    int height;
    int weight;
    int age;
    int color;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight = w;
    }
    // int setColor(int c){
    //     this->color = c;
    // }
};
class Male:public Human{
    public:
    string color;
    void sleep(){
        cout<<"Make me happy "<<endl;
    }
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
    // object1
    object1.sleep();
    object1.setWeight(84);
    cout<<object1.weight<<endl;



    return 0;
}