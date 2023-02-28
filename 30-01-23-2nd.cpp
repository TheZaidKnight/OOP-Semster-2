#include<iostream>
using namespace std;
int first_num(int num){
    int first;
    while (num>=10){
        num=num/10;
    }
    first=num;
    return first;
}
int last_num(int num){
    int last;
    last=num%10;
    return last;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"the first number is:"<<first_num(num)<<endl<<"the last number is:"<<last_num(num);
    return 0;
}
