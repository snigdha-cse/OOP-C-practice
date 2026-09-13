#include<iostream>
#include<string>
using namespace std;
class Teacher{
public:
    string name;
    Teacher(string name){
        this->name=name;
    }
    void display(){
        cout<<"name:"<<name<<endl;
    }
};
int main(){
    Teacher t1("snigdha");
    t1.display();
    return 0;
}