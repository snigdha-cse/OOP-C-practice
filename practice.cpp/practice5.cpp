#include<iostream>
#include<string>
using namespace std;
class Teacher{
public:
    //properties
    string name;
    string dept;
    string subject;
    double salary;

    //method/member functions
    void changeDept(string newDept){
        dept=newDept;
    }
};
int main(){
    Teacher t1;
    t1.name="snigdha";
    t1.subject="c++";
    t1.dept="cse";
    t1.salary=50000;
    cout<<t1.name<<endl;
    return 0;
}