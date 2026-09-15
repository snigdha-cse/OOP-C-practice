#include<iostream>
using namespace std;
int square(int i){
    cout<<"square(int)called"<<endl;
    return i*i;
}
double square(double i){
    cout<<"square(dounle)called"<<endl;
    return i*i;
}
int main(){
    cout<<square(10)<<endl;
    cout<<square(0.5)<<endl;
    return 0;
}

