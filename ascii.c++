#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the any number"<<endl;
    cin >> a ;
    if(122>a>96)
    cout<<"number is lowercase"<< endl;
    else if(90>a>64)
    cout << "number is found in uppercase"<<endl;
    else if(9>a>0)
    cout << " it is found in number " << endl;
    else
    cout<< "it is special charecter " << endl;

}