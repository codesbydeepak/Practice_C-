#include<iostream>
using namespace std;

int main(){

    //Arthmetics operators
    // int a = 105, b = 20;
    
    // cout<<"Sum of a and b => "<<a+b<<endl;
    // cout<<"Subtraction of a and b => "<<a-b<<endl;
    // cout<<"Multiplication of a and b => "<<a*b<<endl;
    // cout<<"Divison of a and b => "<<a/b<<endl;
    // cout<<"if we devide a and b the reminder become "<<a%b<<endl;



    //Assignment operators
    // int a = 20;

    // cout<<"original value of A => "<<a<<endl;
    // a += 50;
    // cout<<"Value of A (+= 50) => "<<a<<endl;
    // a -=50;
    // cout<<"Value of A (-=50) => "<<a<<endl;
    // a *= 50;
    // cout<<"Value of A (*= 50) => "<<a<<endl;
    // a /= 50;
    // cout<<"Value of A (/= 50) => "<<a<<endl;
    // a %= 50;
    // cout<<"Value of A (%= 50) => "<<a<<endl;



    //Relational Operators(answer will be in True(1) or false(0))
    // int a = 10;
    // int b = 20;

    // cout<<"Equal to => "<<(a==b)<<endl;
    // cout<<"Not Equal to => "<<(a!=b)<<endl;
    // cout<<"A is greater then B => "<<(a>b)<<endl;
    // cout<<"A is Less then B => "<<(a<b)<<endl;
    // cout<<"A is greater then or equal to B => "<<(a>=b)<<endl;
    // cout<<"A is Less then or equal to B => "<<(a<=b)<<endl;

    //Logical operators
    // int a = 10;
    // int b = -20;

    // cout<<"Logical And "<<(a>0 && b>0)<<endl;// 0
    // cout<<"Logical Not "<<(!a)<<endl;// 0
    // cout<<"Logical OR "<<(a>0 || b>0);// 1



    //Increment and Decrement Operators

    //Preincrement operator (++a) //a = a+1 (1st increment then print)
    
    //Postincrement operator (a++) //a = a+1 (1st print then increment)
    // int a = 10;

    // cout<<"Pre Increment "<<++a<<endl;
    // cout<<"Post Increment "<<a++<<endl;
    // cout<<a;

    //Predecrement operator (--a) //a = a-1 (1st decrement then print)
    //Postdecrement operator (a--) //a = a-1 (1st print then decrement)
    // int a = 10;

    // cout<<"Pre decrement "<<(--a)<<endl;
    // cout<<"Post decrement "<<(a--)<<endl;
    // cout<<a;


    //Ternary Operator

    // int x = 10;
    // int y = 20;

    // cout<<((x>y)?x:y)<<endl;


    //Sizeof operator

    int a = 10;
    float b = 10.2;
    char ch = '@';
    string str = "Deepak";
    
    cout<<"Size of integer = "<<sizeof(a)<<endl;
    cout<<"Size of Float = "<<sizeof(b)<<endl;
    cout<<"Size of character = "<<sizeof(ch)<<endl;
    cout<<"Size of string = "<<sizeof(str)<<endl;

    return 0;
}