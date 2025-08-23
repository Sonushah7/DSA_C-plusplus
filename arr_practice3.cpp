#include<iostream>
#include<climits>   // for INT_MIN
using namespace std;

int main(){
    int arr[] = {10, 5, 20, 20, 8, 10, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN){
        cout << "No second largest element (all elements are same)" << endl;
    }
    else{
        cout << "Second largest element is: " << secondLargest << endl;
    }

    return 0;
}
