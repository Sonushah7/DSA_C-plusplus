//Rotate the given array 'a' by k-steps,where k is non-negative.
//Note:k can be greater then n as well where n is the size of array.

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=3;
    k=k%n;
    int ansarr[5];
    int j=0;

    for(int i=n-k;i<n;i++){
        ansarr[j++]=arr[i]; //j is in post-increment(first its value is same as inilized then gets incremented.)
    }

    for(int i=0;i<n-k;i++){
        ansarr[j++]=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<ansarr[i]<<" ";
    }

return 0;
}