#include<iostream>
using namespace std;
void reverse(char *p){
    if (*p!='/0'){
        reverse(p+1);
    }
    cout<<*p;
}
int main(){
    char a[]="bilal";
    reverse(a);
    return 0;
}