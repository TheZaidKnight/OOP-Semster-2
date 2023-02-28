#include<iostream>
using namespace std;
void third_largest(int arr[]){
    int temp;
    for (int i=0;i<6;i++){
        for (int j=i+1;j<6;j++){
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    cout<<"The third largest element is:"<<arr[2];
}
int main(){
    int arr[6];
    cout<<"Enter the numbers of an array: \n";
    for (int i=0;i<6;i++){
        cin>>arr[i];
    }
    third_largest(arr);
    return 0;
}