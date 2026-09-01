#include<iostream>
using namespace std;
int main()
{
    int n,Sum=0;
    cout<<"Enter any value for n:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%3 ==0){
        Sum+=i;
        }
    }
    cout<<"sum of odd number is :"<<Sum<<endl;
   return 0;
}