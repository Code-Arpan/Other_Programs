#include<iostream>
using namespace std;

int main(){
    int n, rev=0, lastD;
    
    cout<<"Enter Number: ";
    cin>>n;

    while(n>0){          //reversing the inputed number
        lastD = n%10;
        rev = rev*10 + lastD;
        n/=10;
    }
    cout<<"Reversed Number: "<<rev<<endl;
}