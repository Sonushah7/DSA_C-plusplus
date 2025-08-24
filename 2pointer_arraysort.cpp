#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

void sort(vector<int> &arr){
    int left_ptr=0;
    int right_ptr=arr.size()-1;

    while(left_ptr<right_ptr){
        if(arr[left_ptr]==1 && arr[right_ptr]==0){
            swap(arr[left_ptr],arr[right_ptr]);
        }
    if(arr[left_ptr]==0){
        left_ptr++;
    }
    if(arr[right_ptr]==1){
        right_ptr--;
    }
}
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}