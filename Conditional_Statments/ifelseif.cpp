#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks:"<<endl;
    cin>>marks;

    if(marks>=90){
        cout<<"your grade is: A"<<endl;
    }else if(marks>=80 && marks<90){
        cout<<"your grade is: B"<<endl;
    }else if(marks>=70 && marks<80){
        cout<<"your grade is: C"<<endl;
    }else if(marks>=60 && marks<70){
        cout<<"your grade is: D"<<endl;
    }else if(marks>=34 && marks<60){
        cout<<"your grade is: E"<<endl;   
    }else if(marks<34){
        cout<<"Fail better luck next time :)"<<endl;
    }
}
