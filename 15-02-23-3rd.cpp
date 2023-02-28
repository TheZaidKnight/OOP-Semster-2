//getters and setters
#include<iostream>
using namespace std;
class student{
    
    private:
    string name,roll_no;
    char grade;
public:
    student(string n,string r,char g){
        name=n;
        roll_no=r;
        grade=g;
    }
    //setter
    void setName(string n){
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
    }
    ~student(){
        cout<<"destructor call"<<endl;
    }
};
int main(){
    //const student s1={"Bilal","1234",'A'};
    student *s=new  student("Faizi","9009",'A');
    /*cout<<s1.getName()<<endl;
    cout<<s1.getRollNo()<<endl;
    cout<<s1.getGrade()<<endl;*/
    /*student s2={"a","v",'b'};
    s2.setName("Ali");
    s2.setRollNo("2456");
    s2.setGrade('A');
    cout<<s2.getName()<<endl;
    cout<<s2.getRollNo()<<endl;
    cout<<s2.getGrade()<<endl;*/
    cout<<s->getName()<<endl;
    cout<<s->getRollNo()<<endl;
    cout<<s->getGrade()<<endl;
    delete s;
    cout<<"The end of class."<<endl;
   return 0;
}
   //constant objects can only be called by constant setters
