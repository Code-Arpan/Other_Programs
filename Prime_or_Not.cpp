#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout<< "Enter Number: ";
    cin>>n;

    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is a Non-Prime Number."<<endl;
            break;
        }
    }
    if(i==n){
        cout<<n<<" is a Prime Number."<<endl;  
    }
    

    return 0;
}