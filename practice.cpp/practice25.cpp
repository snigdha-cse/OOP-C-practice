#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int pos;
    cout<<"input string:";
    cin>>s;
    pos=s.find("-");
    s.erase(pos,1);
    cout<<"- is removed from the string:"<<s<<endl;
    return 0;
}