#include<iostream>
using namespace std;
void check(int n,int k){
    if(n&(1<<(k-1)!=0)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
int main(){
    check(5,3);
}