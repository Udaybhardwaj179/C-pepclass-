#include <iostream>
#include <array>
using namespace std;


void wavearray(int arr[],int n){
    for (int i=0;i<n;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
int main (){
    int n=6;
    int arr[6]={1,2,3,4,5,6};
    wavearray(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
