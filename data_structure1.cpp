#include<iostream>
#include<cstring>
using namespace std;
struct god
{
    char brother[50];
    char name[50];
    char birthplace[50];
    
};
int main(){
struct god ram;
struct god krishna;

//Array is used so,strcpy is used to access.
//we can also use sting where no need to use any (strcpy) variable.
strcpy(ram.name,"rama");
strcpy(ram.brother,"laksham");
strcpy(ram.birthplace,"Ayodhya");
strcpy(krishna.name,"krishna vasudev");
strcpy(krishna.brother,"balaram");
strcpy(krishna.birthplace,"Mathura");

cout<<ram.name<<endl;
cout<<ram.brother<<endl;
cout<<ram.birthplace<<endl;
cout<<endl;
cout<<krishna.name<<endl;
cout<<krishna.brother<<endl;
cout<<krishna.birthplace<<endl;

return 0;
}






