//Write a menu-driven program using a do–while loop that allows a user to perform operations on a list of numbers.
//1. sum of the list
//2. Display all numbers
//3. Find the maximum number
//4. Find the average of numbers
//5. clear the list
//6. exit

#include<iostream>
#include <vector>
using namespace std;

int add(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

int max(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int avg(int arr[],int size){
    int sum=0;
    int avg=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    avg=sum/size;
    return avg;
}

int main(){
    int arr[]={2,5,6,7,8,4};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int input;
    do{
        cout<<"enter your choice:"<<" ";
        cin>>input;
        if(input==1){
            int a;
            a=add(arr,size);
            cout<<"the sum of list of number is:"<<" "<<a<<endl;
        }
        else if(input==2){
            display(arr,size);
        }
        else if(input==3){
            int b;
            b=max(arr,size);
            cout<<"the max number in the list is:"<<" "<<b<<endl;
        }
        else if(input==4){
            int c;
            c=avg(arr,size);
            cout<<"the average of the list is:"<<" "<<c<<endl;

        }
        else if(input==5){
            cout<<"exit"<<endl;
        }
        else{
            cout<<"No operation available"<<endl;
        }

    }
    while(input!=0);
    cout<<"you are out of program"<<endl;
    return 0;


}