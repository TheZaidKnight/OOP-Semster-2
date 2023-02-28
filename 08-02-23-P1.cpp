#include<iostream>
#include<string>
using namespace std;
struct car{
    string model;
    int year;
    float price;
void input(){
    cout<<"Enter the model of the car:";
    cin>>model;
    cout<<"Enter the year of the car:";
    cin>>year;
    cout<<"Enter the price of the car:";
    cin>>price;
}  
void print(){
    cout<<"Model:"<<model<<endl;
    cout<<"Year:"<<year<<endl;
    cout<<"Price:"<<price<<endl;
}
};   
int main(){
    int count_in=0;
    int count_out=0;
    car data[30];
    while(count_in<30){
        data[count_in].input();
        count_in++;
    }
    while(count_out<30){
    if (data[count_out].price>500000){
        data[count_out].print();
        count_out++;
    }
    else {
        count_out++;
    }
    }
    return 0;
}