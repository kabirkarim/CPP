#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 Integers: \nEnter 1st Integer: ";
    cin>>a;
    cout<<"Enter 2nd Integer: ";
    cin>>b;
    
    //Method 01- Using Temp Variable
    int temp=a;
    a=b;
    b=temp;
    
    //Method 02- Using Arthmetic 
    // a=a+b;
    // b=a-b;
    // a=a-b;
    cout<<"After Swapping Numbers: \n";
    cout<<"1st Integer: "<<a<<endl;
    cout<<"2nd Integer: "<<b<<endl;
    return 0;
}