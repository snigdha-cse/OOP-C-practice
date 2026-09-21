#include<iostream>
#include<string>
using namespace std;
class Student{
private:
string name;
int score;
public:
void setInfo(string n, int s){
    name=n;
    score=s;
}

};

      

int main(){
    Student s1;
    s1.name="snigdha";
    s1.score=80;
    s1.printInfo();
    return;

}