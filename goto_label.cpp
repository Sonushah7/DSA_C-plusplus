 #include<iostream>
 using namespace std;
 int main(){
    int a=10;
    loop: do{
        if(a==15){
            a=a+1;
            goto label;
        }
        cout<<"value of a:"<<a<<endl;
        a=a+1;

    }
    while (a<20);
    return 0;
    label:
    cout<<"value of a:"<<a<<endl;
    goto loop; 

 }