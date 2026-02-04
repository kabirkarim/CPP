#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter An Integer of 5 digit: ";
    cin>>num;
    int a=num%10;
    int b=(num/10)%10;
    int c=(num/100)%10;
    int d=(num/1000)%10;
    int e=(num/10000)%10;
    //Method 1-For Output
    // cout<<a<<b<<c<<d<<e;
    
    //Method 2
    int reverse=(a*10000)+(b*1000)+(c*100)+(d*10)+(e);
    cout<<reverse;
    
    return 0;
}