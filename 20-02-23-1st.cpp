#include<iostream>
using namespace std;
class student{
    private:
    string name,roll_no;
    char grade;
public:
     //default parameter constructor
    student (string n="",string r="",char g='-'){
        name=n;
        roll_no=r;
        grade=g;
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<grade<<endl;
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
    /*~student(){
        cout<<"destructor call"<<endl;
    }*/
};
int main(){
   student s1;
   student s2("Bilal");
   student s3("Bilal","1234");
   student s4("Bilal","1234",'A');
   student s5(" "," ",'A');
    return 0;
}