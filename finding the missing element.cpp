#include <iostream>
#include <array>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;
int main(){
    int a[]={2,1,3,5,6};
    vector <int> v;
    for (auto i:a){
        v.push_back(i);
    }
    sort(v.begin(),v.end());
  
 
    int s=1;
    for (auto i:v){
        if (i!=s){
            cout<<s;
            break;
        }
        s++;
    }

}
