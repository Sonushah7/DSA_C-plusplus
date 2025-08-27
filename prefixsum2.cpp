//check if we can partition the array

#include<iostream>
#include <vector>
using namespace std;

bool prefixsum(vector<int> &arr){
    int totalsum=0;
    for(int i=0;i<arr.size();i++){
        totalsum+=arr[i];
    }
    int prefixsum=0;
    for(int i=0;i<arr.size();i++){
        prefixsum+=arr[i];
        int suffixsum=totalsum-prefixsum;

        if(prefixsum==suffixsum){
            return true;
        }
    }
     return false;
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
    
    cout<<prefixsum(arr)<<endl;
    return 0;
}