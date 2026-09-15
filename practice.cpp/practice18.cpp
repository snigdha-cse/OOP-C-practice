#include<iostream>
using namespace std;
void display(char c='*', int n=10){
    for(int i=0; i<n; i++)
        cout<<c;
    cout<<endl;
}
int main(){
    cout<<"when there is no argument passed:"<<endl;
    display();
    cout<<"when only one argument is passed:"<<endl;
    display('#');
    cout<<"when all arguments are passed:"<<endl;
    display('#', 5);
    return 0;

}