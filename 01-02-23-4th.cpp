#include<iostream>
using namespace std;
int factorial(int n){
    if (n==0){
        return 1;
    }
    else
    return n*factorial(n-1);
}
int main(){
    int num;
    cout<<"Enter the number you want to get the factorial for:";
    cin>>num;
    cout<<factorial(num)<<endl;
    return 0;
}