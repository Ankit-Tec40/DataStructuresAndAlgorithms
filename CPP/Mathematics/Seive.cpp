#include<iostream>
#include<vector>
using namespace std;
void seive(int n){
    vector <bool> isprime(n+1,true);
    for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<endl;
            for(int j=i*i;j<=n;j=j+i){
                isprime[j]=false;
            }
        }
    }
}
int main(){
    seive(6);
}