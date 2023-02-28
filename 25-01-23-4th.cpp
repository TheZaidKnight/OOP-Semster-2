//dynamic memory allocation
//note that a "new" keyword should be preceeded by a "delete" keyword to prevent a memory leak
//see "dangling pointer"
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=new int();
    *p=10;
    delete p;
    p=new int[4];
    delete []p;
    return 0; 
}