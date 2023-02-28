#include<iostream>
using namespace std;
struct student{
    string name;
    string roll_no;
};
/*anonymous structure*/
struct {
    int x=5;
    int y=6;
    }p1,p2;
//structures with functions
void print(student &a){
    a.name="Ali";
    a.roll_no="22i-2625";
    cout<<a.name<<endl;
    cout<<a.roll_no<<endl;
}  
int main(){
    student a={"zaid","22i-8793"};
    student *ptr=&a;
    cout<<p1.x<<endl;
    cout<<ptr->name<<endl<<ptr->roll_no;//use of arrow operation(->)
    cout<<endl<<(*ptr).name<<endl<<(*ptr).roll_no;
    cout<<endl<<ptr<<endl;
    print(a);
}