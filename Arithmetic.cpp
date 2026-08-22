#include<iostream>
using namespace std;
int main()
{
    char op;
    float a,b;
    {
        cout<<"Enter value of a:"<<endl;
        cin>> a;
        
        cout<<"Enter value of b:"<<endl;
        cin>> b;

        cout<<"The sum of two numbers:"<<(a+b)<<endl;
        cout<<"The substreaction of two numbers:"<<(a-b)<<endl;
        cout<<"The multiplication of two numbers:"<<(a*b)<<endl;
        
        if(b!=0){
            cout<<"The devision of two numbers:"<<(a/b)<<endl;
        }
        else{
            cout<<"The devision of two numbers:undefined (division by zero)"<<endl;
        }
    }
    return 0;
}