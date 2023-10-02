#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }    
}
void sort(int arr[], int n){
    int left = 0 , right = n-1;
    while(left<right){
        while(arr[left] == 1 && (left < right) ){
            left++;
        }
        while(arr[right] == 0 && (left < right)){
            right--;
        }

        int temp;
        temp=arr[left];
        arr[left] =arr[right];
        arr[right] =temp;
        left++;
        right--;
    }

}


int main(){
    int x;
    int arr[8]={1,0,1,0,1,0,1,0};
    sort(arr, 8);
    printArray(arr, 8);
}