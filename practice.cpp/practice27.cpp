#include<iostream>
using namespace std;
class Time{
private:
      int hour;
      int minute;
public:
      Time(int h=0, int m=0):hour{h}, minute{m}{
        cout<<"Constructor called"<<endl;

      }
      ~Time(){
        cout<<"Destructor called"<<endl;
      }
      void print(){
        cout<<hour<<":"<<minute<<endl;
      }
};
int main(){
    Time a(10,25);
    a.print();
    return 0;
}