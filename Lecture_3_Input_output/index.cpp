#include<iostream>
using namespace std;

int main(){
    //user ka name and age.

    string name;
    int age;

    cout<<"Enter Your name"<<endl;
    //cin>>name; // for single name.
    getline(cin,name); //for two name.
    cout<<"Enter Your Age"<<endl;
    cin>>age;

    cout<<"hello "<<name<<"!"<<endl<<"Thank you so much, for providing me your detail."<<endl<<"so you are "<<age<<" years old.";
    return 0;
}