#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, addr;
    cout<<"input name:";
    cin>>s1;
    cin.ignore();
    cout<<"input address:";
    getline(cin,addr);
    cout<<addr<<s1<<"hi"<<endl;
    return 0;

}
