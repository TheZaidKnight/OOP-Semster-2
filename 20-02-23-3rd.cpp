#include<iostream>
using namespace std;
class student{
    private:
    string name,roll_no;
    char grade;
public:
     //default parameter constructor
    student (string n,string r,char g){
        name=n;
        roll_no=r;
        grade=g;
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
    void print(){
        cout<<name;
        cout<<roll_no;
        cout<<grade;
    }
    ~student(){
        cout<<name<<" ";
        cout<<"Destructor call"<<endl;
    }
};
int main(){
    string n,r;
    char g;
    student *s[4];
    s[2]=new student(*s[1]); 
    for (int i=0;i<4;i++){
        delete s[i];
    }
    return 0;
}
//pointers k saath memory allocate karna mandatory hai