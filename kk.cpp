
int firstOccur(int arr[],int n,int key){
    int s,e;
    s=0;
    e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;//instead of returning the index we are storing and making e=mid-1 to look for more 
            //occurrences.
            e=mid-1; 
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOccur(int arr[],int n,int key){
    int s,e;
    s=0;
    e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;//searching on the right side for the final occurence;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}



vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    ans.push_back(firstOccur(arr,n,x));
    ans.push_back(lastOccur(arr,n,x));
    return ans;
}