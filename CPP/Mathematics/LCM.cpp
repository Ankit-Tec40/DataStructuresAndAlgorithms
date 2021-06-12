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

int lcm(int a,int b){
    int res=max(a,b);
    while(true){
        if(res%a==0 && res%b==0){
            return res;
        }
        res++;
    }
    return res;
}


int lcm2(int a,int b){
    int g=gcd1(a,b);
    return(a*b/g);
}
int main(){
    cout<<lcm(4,6)<<endl;
    cout<<lcm2(4,6);
}