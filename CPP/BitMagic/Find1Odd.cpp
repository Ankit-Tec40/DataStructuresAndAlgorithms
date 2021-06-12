#include<iostream>
using namespace std;
int findodd(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
int main(){
    int arr[]={1,1,2,2,4,4,5,5,7,7,7,7,7};
    cout<<findodd(arr,13);
}