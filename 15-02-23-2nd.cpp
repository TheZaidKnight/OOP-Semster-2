#include<iostream>
using namespace std;
class Circle{
    private:
        double radius;

    public:
    Circle();
    Circle(double rad){
        radius=rad;
    }
    /*double getArea(){
        return (radius*radius*3.142)};*/
    
};
int main(){
    Circle C1;
    Circle();
    return 0;
}