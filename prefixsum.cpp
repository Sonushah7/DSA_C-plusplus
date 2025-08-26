#include<iostream>
#include <vector>
using namespace std;

void runningsum(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        arr[i]+=arr[i-1];
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    runningsum(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}