#include<iostream>>
using namespace std;
void DoublePointer(){
    int m=3,n=2;
    int **arr;
    arr=new int *[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }
}
int main(){

}