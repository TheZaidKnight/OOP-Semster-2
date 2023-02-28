//pointers & memory management
//stack: static memory
//heap: dynamic memory
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<aptr<<endl;
    cout<<a<<endl;
    cout<<*aptr<<endl;
    cout<<++aptr<<endl;
    return 0;
    int arr[]={10,20,30,40,50};
    cout<<*arr;
    for (int i=0;i<5;i++)
    {
        cout<<*arr+i<<endl;
    }
}
