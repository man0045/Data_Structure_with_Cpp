#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
    int i = 0, j = 0, k = 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] > arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }

        if(i == arr1.size()){
            while(j<arr2.size()){
                arr3[k++] = arr2[j++];
            }
        }
        if(j == arr2.size()){
            while(i < arr1.size()){
                arr3[k++] = arr1[i++];
            }
        }
    }
}

void merge(vector<int> &result){
    int n = result.size();

    if(n == 1) return;

    int n1 = n/2;
    int n2 = n-n/2;
    
    vector<int> a(n1) ,b(n2);
    for(int i = 0; i<n1; i++){
        a[i] = result[i];
    }
    for(int i = 0; i < n2; i++){
        b[i] = result[i+n1];
    }

    merge(a);
    merge(b);
    mergeSort(a, b, result);

}

int main(){
    // int arr[] = {45,7,89,54,98,0};

    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout<<"Enter the Size"<<endl;
    cin>>n;
    vector<int>result(n);
    
    for(int i = 0; i<n; i++){
        cin>>result[i];
    }
    for(int i =0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    merge(result);
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

}