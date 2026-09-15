#include<iostream>
using namespace std;
void print(int i){
    cout<<"integer:"<<i<<endl;

}
void print(double i){
    cout<<"double:"<<i<<endl;

}
void print(char c){
    cout<<"character:"<<c<<endl;
}
int main(){
    print(100);
    print(3.14);
    print('C');
    return 0;

}