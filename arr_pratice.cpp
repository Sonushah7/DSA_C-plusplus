#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,76};
    int n=5;
    int x;
    cin>>x;
    int pair=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    pair++;
                }
            }
        }
    }
    cout<<pair<<endl;
    return 0;
}