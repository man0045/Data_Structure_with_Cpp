#include<iostream>
using namespace std;


int getpivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid +1 ;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[6] = {2,3,45,1,4,6};
    cout<< "the pivot element is at index " << getpivot(arr, 6)<< endl;
}