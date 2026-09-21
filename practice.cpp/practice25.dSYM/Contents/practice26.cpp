#include<iostream>
using namespace std;
class Time{
public:
       int hour;
       int minute;
       Time(int h, int m){
        hour =h;
        minute=m;
       }
       void print(){
        cout<<hour<<":"<<minute<<endl;
       }
};
int main(){
    Time t(10,30);
    t.print();
    return 0;
}