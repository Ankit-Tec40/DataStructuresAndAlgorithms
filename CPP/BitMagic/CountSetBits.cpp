#include<iostream>
using namespace std;
int count(int n){
    int res=0;
    while(n>0){
        // res=res+(n&1);
        // n=n>>1;
        if((n&1)==1){
            res++;
        }
        n=n>>1;
    }
    return res;
}


int count2(int n){
    int res=0;
    while(n>0){
        n=(n&(n-1));
        res++;
    }
    return res;
}
int main(){
    cout<<count(5)<<endl;
    cout<<count(5);
}