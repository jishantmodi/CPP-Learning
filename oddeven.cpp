#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number:";
    cin>>num;

    if (num % 2 == 0)
        cout<<"It's Even"<<endl;
    else
        cout<<"It's Odd"<<endl;

        return 0;
}