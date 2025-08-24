#include<iostream>
#include <vector>
using namespace std;

void sortzeroandones(vector<int> &arr){
    int zerocount=0;
    for(int ele:arr){
        if(ele==0){
            zerocount++;
        }
    }
    for(int i=0;i<arr.size();i++){
        if(i<zerocount){
            arr[i]=0;
        }
        else{
            arr[i]=1;
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
    
    sortzeroandones(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}