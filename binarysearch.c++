#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[] ,int n ){
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

}
int main(){
    cout<<"enter the size"<<endl;
    int arr[6] = {4,6,8,9,12,45};
    int a[5] = {2,5,7,9,1};
    reverse(arr,6);
    reverse(a,5);
    printArray(arr,6);
    printArray(a,5);
    return 0;
}