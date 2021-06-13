#include<iostream>
using namespace std;
bool check(string &str,int start,int end)
{
    if(start>end){
        return true;
    }
return((str[start]==str[end])&&check(str,start++,end--));
}
int main(){
    string str="121";
    cout<<check(str,0,2);
    return 0;
}