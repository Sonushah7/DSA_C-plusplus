#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,66,7,11,44,7};
    int size=(sizeof(arr)/sizeof(arr[0]));
    
    int find;
    cin>>find;
    int ans=-1;
    for(int i=0;i<=size;i++){
        if(arr[i]==find){
            cout<<"element found at index:"<<" ";
            ans=i;
        }
    }
    cout<<ans<<endl;

    return 0;
}