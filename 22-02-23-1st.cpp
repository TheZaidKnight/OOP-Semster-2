#include<iostream>
using namespace std;
class student{
    private:
    string name,roll_no;
    char *grade;
    public:
    student(string n="",string r="",char g='\0'){
        name=n;
        roll_no=r;
        *grade=g;
    }
    void setGrade(char g){
        *grade=g;
    }
    void print(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<*grade<<endl;
    }
    student(student &s){
        grade=new char();
        name=s.name;
        roll_no=s.roll_no;
        *grade=*(s.grade);
    }
    ~student(){
        cout<<"Destructor called";
    }
};
int main(){
    student s1("Bilal","1234",'A');
    student s2=s1;
    s1.print();
    s2.setGrade('B');
    s2.print();
    return 0;
}