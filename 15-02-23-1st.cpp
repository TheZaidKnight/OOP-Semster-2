#include<iostream>
#include<string>
using namespace std;
//default constructor
class student{
    private:
        string name;
        string roll_no;
        char grade;
    public:
        student()
        {
            cout<<"No arguemnet constructor called";
        }
        student(string n,string r,char g){
            cout<<"3 arguments constructor called";
        }
    };
int main(){
//student s1;
//student s1={"zaid","22i-8793",'A'};
}

