#include<iostream>
using namespace std;
int gcd1(int a,int b){
    while(a!=b){
        if (a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int gcd2(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd2(b,a%b);
    }
}

int main(){
    cout<<gcd1(4,6)<<endl;
    cout<<gcd2(4,6)<<endl;

}