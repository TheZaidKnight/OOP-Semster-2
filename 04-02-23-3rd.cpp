#include<iostream>
using namespace std;
int fab(int n){
    if (n==0||n==1)
    return n;
    else
    return fab(n-1)+fab(n-2);
}
int main(){
    int num;
    int count;
    cout<<"Enter the nth term of the fibnacci sequence:";
    cin>>num;
    for (int i=0;i<=num;i++){
        cout<<fab(i)<<" ";
    }
    return 0;
}