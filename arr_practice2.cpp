#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,3,2,4,5};
    int size=7;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }

    for(int k=0;k<size;k++){
        if(arr[k]!=-1){
            cout<<arr[k];
        }
    }
    return 0;
}