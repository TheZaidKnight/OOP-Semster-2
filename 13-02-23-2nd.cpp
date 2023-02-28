//use of constructors
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
public:
    /*student(){//constructor will be called by default by the complier(no need to call in the main)
        name="Bilal";
        roll_no="1234";
        grade='A';
        //cout<<"No arguement for constructor called.";
    }*/
    student(string n,string r,char g){
        name=n;
        roll_no=r;
        grade=g;
    }
/*void input(){
    cout<<"Enter the name of the student:";
    cin>>name;
    cout<<"Enter the roll no. of the student:";
    cin>>roll_no;
    cout<<"Enter the grade of the student:";
    cin>>grade;
}*/
void print(){
    cout<<"The name of the student is:"<<name<<endl;
    cout<<"The roll no. of the student is:"<<roll_no<<endl;
    cout<<"The grade of the student is:"<<grade;
}
};
int main(){
    //student s1={"Bilal","1234",'A'};
    student s1("Bilal","1234",'A');
    //student s2;
    //s1.input();
    //s1.print();
    return 0;
}
/*Inline functions:(used above)defined in the same line as declaration
Out-of-Line functions:void input();
    void Student::input()
    {}*/