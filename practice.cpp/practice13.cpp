#include<iostream>
using namespace std;
int square(int n){
    return (n*n);
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<square(n)<<endl;
    return 0;
}