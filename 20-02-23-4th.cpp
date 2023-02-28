#include<iostream>
using namespace std;
//student class default parameter constructor and destructor print function
class student{
    private:
    string name;
    string roll_no;
    char *grade;
    static int semster;
    public:
    student(string n,string r,char g){
        grade=new char[2];
        name=n;
        roll_no=r;
        *grade=g;
    }
    void setName(string n){
        name=n;
    }
    void setGrade(char g){
        *grade=g;
    } 
    void print(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<grade<<endl;
        cout<<semster<<endl;
    }
    ~student(){
        cout<<"Destructor called";
    }
};
int student::semster=2;//not working in 22-02-23-2nd.cpp
int main(){
    student s1("Bilal","1234",'A');
    student s2=s1;
    s1.print();
    s2.print();
    s2.setName("Ali");
    s2.setGrade('C');
    s1.print();
    s2.print();
    //in this case a shallow copy is created by the compiler which is a copy constructor
    return 0;
}