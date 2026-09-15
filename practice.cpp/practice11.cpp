#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    double* cgpaPtr;
    Student(string name, double cgpa){
        this->name=name;
        cgpaPtr= new double;
        *cgpaPtr= cgpa;
       
    }
    Student(Student &obj){
        this->name=obj.name;
        cgpaPtr= new double;

       *cgpaPtr=*obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaPtr<<endl;
    }

};
int main(){
    Student s1("snigdha", 4.5);
  
    Student s2(s1);
    s1.getInfo();
    s2.name="choa";
    *(s2.cgpaPtr)=5.00;
    s2.getInfo();

    return 0;
}