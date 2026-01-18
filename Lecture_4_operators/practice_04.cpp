#include<iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout<<"Enter the value of A => ";
    cin>>a;
    cout<<"Enter the value of B => ";
    cin>>b;

    cout<<"Postive or not(if 1 then yes, if 0 then No) => "<<(a>0 && b>0);
    return 0;
}