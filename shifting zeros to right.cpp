#include <iostream>
#include <array>
using namespace std;


int main(){
    int arr[]={12,0,13,15,0};
    int a=5;
    int arr1[a];
    int c=0;
    int h=0;
    for (int i=0;i<5;i++){
       if (arr[i]==0)c++;
       else{
        arr1[h]=arr[i];
        h++;
       }
    }
    for (int i=h;i<5;i++){
        arr1[i]=0;
    }
    for (auto i:arr1){
        cout<<i<<" ";
    }

}
