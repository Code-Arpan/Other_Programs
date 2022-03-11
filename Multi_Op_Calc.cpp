/*
  Multiple Operations Calculator 
  
  In this calculator you can do an unlimited number of operations
  and when you done calculating just enter any character except the 
  operators(+,-,*,/) to Exit.
*/
#include<iostream>
using namespace std;

int main(){
    double val1, val2, ans;  char optr;  int i=1;

    cout<<"Enter value 1: ";
    cin>>val1;
    cout<<"Enter Operator(+,-,*,/) or Press any key to exit: ";
    cin>>optr;
    if(optr=='+' || optr=='-' || optr=='*' || optr=='/'){
        cout<<"Enter value 2: ";
        cin>>val2;
    }
    else{ 
        cout<<"Thanks for using this calculator.";
        return 0;
    }


    while(i>0){
    if(optr=='+'){
        ans = val1+val2;
        i++;
    }
    else if(optr=='-'){
        ans = val1-val2;
        i++;
    }
    else if(optr=='*'){
        ans = val1*val2;
        i++;
    }
    else if(optr=='/'){
        ans = val1/val2;
        i++;
    }
    cout<<ans<<" ";     // example- answer_operator_new value
    val1 = ans;
    cin>>optr;
    if(optr=='+' || optr=='-' || optr=='*' || optr=='/'){
        cin>>val2;
    }
    else{ 
        cout<<"Thanks for using this calculator.";
        break;
    }
    }
    return 0;
}


