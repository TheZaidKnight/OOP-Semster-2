#include<iostream>
using namespace std;
void val_swap(int *a,int *b);
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    val_swap(&a,&b);

    return 0;
}
void val_swap(int *a,int *b){
    int temp;
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    cout<<"value of a:"<<*a<<endl;
    cout<<"value of b:"<<*b<<endl;
}