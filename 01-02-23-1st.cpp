//2D pointers
#include<iostream>
using namespace std;
int main(){
    int arr[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    int *ptr;
    ptr=arr[0];
    cout<<*arr[0]+1;// will print the specific element
    /*ptr=&arr[0][0];
    for (int i=0;i<15;i++){     will print all relevant places of an array
        cout<<*ptr*i<<endl;
    }*/
}