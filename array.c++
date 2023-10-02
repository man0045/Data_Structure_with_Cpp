#include<iostream>
using namespace std;
 void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
 }
void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main(){
    int even[8] = {12,43,65,76,12,54,67,8};
    int odd[5]= {12,32,11,34,54};
    swapAlternate(even,8);
    printArray(even, 8);
    cout<<endl;
    swapAlternate(odd,5);
    printArray(odd, 5);

}