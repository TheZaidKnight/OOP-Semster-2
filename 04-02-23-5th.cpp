#include<iostream>
using namespace std;
int stars(int num)
{
    if(num==0)
    {
        return 0; 
    }
    
    else
        {
            cout<<"*";
            stars(num-1);
        }    
}
void pattern(int num){
    if (num==0){
        return;
    }
    else {
        stars(num);
        cout<<endl;
        pattern(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<stars(num);
    return 0;
}