#include<iostream>
using namespace std;
int main()
{
    int n,oddSum=0;
    cout<<"Enter any value for n:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2 !=0){
            oddSum+=i;
        }
    }
    cout<<"sum of odd number is :"<<oddSum<<endl;
   return 0;
}