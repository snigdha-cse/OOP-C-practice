#include<iostream>
#include<string>
using namespace std;
int main(){
    string sentence="When in Rome, do as the Romans.";
    string target="Rome";
    size_t  position=sentence.find(target);
    if(position!=string::npos)
    cout<<position<<endl;
    else
    cout<<"the string counld not be found"<<endl;
    return 0;
}