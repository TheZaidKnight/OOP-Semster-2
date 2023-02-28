#include<iostream>
using namespace std;
int power(int n,int p){
    if(p==0)
    {
        return 1;//multiplication and division cases will have return 1
    }
    else
    return n*power(n,p-1);
}
int main(){
    int p;
    int n;
    cout<<"Enter a number to be multiplied:";
    cin>>n;
    cout<<"Enter a power of the number to multiplied:";
    cin>>p;
    cout<<power(n,p)<<endl;
    return 0;
}