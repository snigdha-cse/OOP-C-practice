#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;
public:
Teacher(){
    cout<<"constructor called"<<endl;
}
    //properties
    string name;
    string dept;
    string subject;
   

    //method/member functions
    void changeDept(string newDept){
        dept=newDept;
    }
    void setSalary(double s){
        salary=s;
    }
    double getSalary(){
        return salary;
    }
};
int main(){
    Teacher t1;
    t1.name="snigdha";
    t1.subject="c++";
    t1.dept="cse";
    t1.setSalary(50000);
   
    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}