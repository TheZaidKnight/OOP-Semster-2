#include<iostream>
using namespace std;
int mod(int x,int y){
    if (x%y==0){
        return y;
    }
    else 
    return mod(y,x%y);
}
int main(){
    int num1,num2;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    cout<<mod(num1,num2);
    return 0;
}
//recursion is used in trees and graphs traversal