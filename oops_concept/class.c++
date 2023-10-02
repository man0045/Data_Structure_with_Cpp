#include<iostream>
using namespace std;
 class Hero{
    public:
    int health;
    char level;
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level=ch;
    }
    
 };
int main(){
    Hero ramesh;

    cout<<"Ramesh health is : "<<ramesh.gethealth()<<endl;
    

    ramesh.sethealth(70);
    ramesh.level = 'A';

    cout << "size : "<< ramesh.gethealth() << endl;
    cout << "level : "<< ramesh.level << endl;

    return 0; 
}