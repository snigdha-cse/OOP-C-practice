#include<iostream>
#include<string>
using namespace std;
int main(){
    string list[]={"snigdha", "choa", "Mitali"};
    for(auto&x:list)
        cout<<(x+"Hi")<<endl;
}
