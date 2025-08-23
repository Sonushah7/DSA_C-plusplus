//Find the difference between the sum of element at even indices to the sum of element at odd indices.

#include<iostream>
#include<vector>
using namespace std;

int sumevenodd(const vector<int>& arr){
    int sum1=0,sum2=0;
    int diff;
    for(int i=0;i<arr.size();i++){
        if(i%2==0){
            sum1+=arr[i];
        }
        else{
            sum2+=arr[i];
        }
    }
    if(sum1>sum2){
        diff=sum1-sum2;
    }
    else{
        diff=sum2-sum1;
    }
    return diff;
    
}



int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int size=arr.size();
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int user;
    user=sumevenodd(arr);
    cout<<user<<endl;
    return 0;

}