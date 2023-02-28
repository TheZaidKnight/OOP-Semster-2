#include<iostream>
using namespace std;
int count(int n){
    if(n/10==0){
        return 1;
    }
    else {
        return 1+count(n/10);
    }
}
int main(){
    int n;
    cout<<"Enter a number to find its number of digits:";
    cin>>n;
    cout<<count(n);
    return 0;
}