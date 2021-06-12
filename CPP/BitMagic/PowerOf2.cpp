//it have only 1 bit

#include<iostream>
using namespace std;
bool check(int n){
    if(n==0){
        return false;
    }
    return((n&(n-1))==0);
}
int main(){
    cout<<check(7);
}