#include<iostream>
using namespace std;
class student{
    private:
    string name,roll_no;
    char grade;
public:
     //default parameter constructor
    student (string n){
        name=n;
        cout<<name<<" ";
        cout<<"Constructor called"<<endl;
    }
    /*student(string n,string r,char g){
        name=n;
        roll_no=r;
        grade=g;
    }*/
    //setter
    /*void setName(string n){
        name=n;
    }
    void setRollNo(string r){
        roll_no=r;
    }
    void setGrade(char g){
        grade=g;
    }
    //getter
    string getName() const{
        return name;
    }
    string getRollNo() const{
        return roll_no;
    }
    char getGrade() const{
        return grade;
    }*/
    ~student(){
        cout<<name<<" ";
        cout<<"Destructor call"<<endl;
    }
}s2("s2");
student s3("s3");
int main(){
    student s1("s1");
    student *s=new student("s");
    delete s;
    student s4("s4");//this will cause s destructor to be called first
    return 0;
}//Objects are declared in heap (all programming languages) while in C++ objects are declared in both heap and stack