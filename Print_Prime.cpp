#include<iostream>
using namespace std;

int main(){
    int a, b, i, n;
    cout<<"Enter Number Range(a b): ";  
    cin>>a>>b;                //input number range for printing Prime Numbers

    for(n=a;n<=b;n++){       
        for(i=2;i<n;i++){
        if(n%i==0){        //checking if the number is not prime
            break;
        }
    }
    if(i==n){          
        cout<<n<<endl;   //prints the prime numbers
    }
 }
 if(i!=n){        //this will be true when no prime number exists in the range
     cout<<"No Prime number exist in the inputed range.";    
 }

    return 0;
}