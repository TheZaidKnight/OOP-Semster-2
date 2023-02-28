//intro to classes
#include<iostream>
using namespace std;
/*struct Student{
    string name;
    string roll_no;
    char grade[5];
void input(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter roll no.:";
    cin>>roll_no;
    for(int i=0;i<5;i++){
    cout<<"Enter grade:";
    cin>>grade;
    }
}
void print(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll no.:"<<roll_no<<endl;
    for(int i=0;i<5;i++){
    cout<<"Grade:"<<grade<<endl;
    }
}
}*/
class student{
    private://will remain unavailable for other functions(including main)
    string name,roll_no;
    char grade;
public://can be available for other functions(including main)
void input(){
    cout<<"Enter the name of the student:";
    cin>>name;
    cout<<"Enter the roll no. of the student:";
    cin>>roll_no;
    cout<<"Enter the grade of the student:";
    cin>>grade;
}
void print(){
    cout<<"The name of the student is:"<<name<<endl;
    cout<<"The roll no. of the student is:"<<roll_no<<endl;
    cout<<"The grade of the student is:"<<grade;
}
};
int main(){
    student s1;
    //student s2={"Bilal","1234",'A'};
    s1.input();
    s1.print();
    return 0;
}
/*UML Diagram for Class and Object
->Class Name(Student)
->State(roll:string) has access modifiers(public +,private -,protected ~)
->Behaviour(input(int),output(int))
*C++ needs the keyword new to allocate the structure memory in heap while object memory is allocated in heap by default (excluding some cases)*/