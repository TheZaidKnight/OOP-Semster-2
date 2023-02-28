/*Structure is a container, it can hold a bunch of things
-These things can be of any type
Used to organize related data into a package*/
#include<iostream>
#include<string>
using namespace std;
struct Address{
    string city;
    string country;
};
struct Student{
    string name;
    string roll_no;
    char grade[5];
    Address a;
void input(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter roll no.:";
    cin>>roll_no;
    for(int i=0;i<5;i++){
    cout<<"Enter grade:";
    cin>>grade;
    }
    cout<<"Enter the city of residence:";
    cin>>a.city;
    cout<<"Enter the country of residence:";
    cin>>a.country;
}
void print(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll no.:"<<roll_no<<endl;
    for(int i=0;i<5;i++){
    cout<<"Grade:"<<grade<<endl;
    }
    cout<<"City:"<<a.city<<endl;
    cout<<"Country:"<<a.country<<endl;
}
}
/*s1,s2,s3(alternate method for declaration of variables)*/;
/*structure is more efficient than array in terms of big data as it can
hold multiple data types (memory is allocated in stack)*/
int main(){
    /*Student s1;
    s1.name="Usman";
    s1.roll_no="22i-7474";
    s1.grade='A';
    Student s2={"Bilal","22i-2324",'A+'}*/
    //Student s2=s1(used to allocate the same values to another variable);
    Student data[5];
    int op;
    int count_in=0;
    int count_out=0;
    bool flag=true;
    while(flag==true){
        cout<<"What operation do you want to perform:(1 for input,2 for print,3 for exit):";
        cin>>op;
    switch(op){
        case 1:
        if(count_in==5){
            cout<<"Any more inputs cant be taken";
        }
        else{
        data[count_in].input();
        count_in++;
        break;
        }
        case 2:
        if(count_in==0){
            cout<<"No data for printing";
        }
        else{
        cout<<"Enter the student number whose data you want to view(0-4):";
        cin>>count_out;
        data[count_out].print();
        break;
        }
        case 3:
        cout<<"Program exited!";
        flag=false;
        break;
    }
    }
    /*data[0].name="Usman"
    data[0].roll_no="22i-7474";
    data[0].grade='A';(very redundant)*/
    /*for(int i=0;i<5;i++){
        cout<<"\nEnter the name of the student:";
        cin>>data[i].name;
        cout<<"\nEnter the Roll_no of the student:";
        cin>>data[i].roll_no;
        for(int j=0;j<5;j++){
        cout<<"\nEnter the grade of the student:";
        cin>>data[i].grade[j];
        }
    }*/
    /*for(int i=0;i<5;i++){
        cout<<"\nName:"<<data[i].name;
        cout<<"\nRoll_no:"<<data[i].roll_no;
        cout<<"\nGrade:"<<data[i].grade;
    }*/
    return 0;
}