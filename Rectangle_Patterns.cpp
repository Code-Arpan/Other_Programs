#include<iostream>
using namespace std;

int main(){
    int row, col, i, j, ch;
    cout<<"Enter No. of Rows & Columns"<<endl;
    cin>>row>>col;

    cout<<"Enter Choice: \n 1.Solid Rectangle \n 2.Hollow Rectangle"<<endl;
    cin>>ch;

    switch (ch){
        case 1:
        for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
        }
        break;

        case 2:
        for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }  
        }
        cout<<endl;
        }
        break;

        default:
        cout<<"Invalid Choice!"<<endl;
    }
    return 0;
}