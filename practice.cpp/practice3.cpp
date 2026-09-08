#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age:";
    cin>>age;
    if(age<=12)
        cout<<"child"<<endl;
    else if( age<=19)
        cout<<"teenager"<<endl;
    else
        cout<<"adult"<<endl;
        return 0;
}