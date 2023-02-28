/*Recursion means a function calls it self to make the problem smaller*/
#include<iostream>
using namespace std;
int sum(int num){
    if (num==0){
        return 0;
    }
    else
    cout<<num<<endl;
    return num+sum(num-1);
}
int main(){
    int user_input;
    cout<<"Enter the number to be summed and printed backwards:";
    cin>>user_input;
    /*for(int i=user_input;i>0;i--){
        cout<<i<<endl;
    }*/
    cout<<sum(user_input)<<endl;
    return 0;
}
/*rules of recursion
1-base case:will define the terminating case
2-use of if:base condition will be used with an if
3-recursive case:define the recursion*/