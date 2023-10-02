#include<iostream>
using namespace std;
int main(){
    int x;
    cout<< "Enter the size of array"<<endl;
    cin>>x;
    int n;
    int f;
    int arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    cout<< " enter the value do you want to match"<<endl;
    cin>>n;
    for (int i=0; i<x; i++){
        for (int j=i+1; j< x; j++){
            for(int k=j+1; k< x; k++){
                cout<<i<<j<<k<<endl;
                f = i+j+k;
                 if(f==n){
                    cout<<"the value get matched "<<endl;
                }
                else{
                    cout<<"Not matched at all"<<endl;
                }
                
            } 
        }
        
    }
   

    for (int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
}