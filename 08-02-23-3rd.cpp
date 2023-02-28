#include<iostream>
using namespace std;
struct Rect{
    int x;
    int y;
};
void input(Rect &r);
void print(Rect r);
void input(Rect &r){
    cin>>r.x;
    cin>>r.y;
}
void print(Rect r){
    cout<<r.x;
    cout<<r.y;
}
int main(){
    Rect r;
    input(r);
    print(r);
    return 0;
}