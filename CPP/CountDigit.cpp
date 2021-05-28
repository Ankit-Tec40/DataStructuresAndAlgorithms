#include<iostream>
using namespace std;

int main(){
    int x,count=0;
    cout<<"enter x";
    cin>>x;
    while(x!=0){
        x=x/10;
        count++;
    }
    cout<<"\n"<<count;
    return 0;
}