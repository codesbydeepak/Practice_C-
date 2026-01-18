#include<iostream>
using namespace std;

int main(){
    int x;
    int y;

    cout<<"Enter the value of x and y => "<<endl;
    cin>>x>>y;

    cout<<((x==5)&&(y==3))<<endl;
    cout<<((x==5)||(y==3));

    return 0;
}