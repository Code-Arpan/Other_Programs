#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,i,maxNo,minNo;
    cout<<"How many numbers you want to enter? ";
    cin>>n;
    int ar[n];
    cout<<"Enter "<<n<<" Numbers: "<<endl;
    for(int i=0;i<n;i++){
     cin>>ar[i];
     }
     
     maxNo=INT_MIN;
     minNo=INT_MAX;

     for(i=0;i<n;i++){
         maxNo = max(maxNo, ar[i]);
         minNo = min(minNo, ar[i]);
     }

     cout<<"Minimum no: "<<minNo<<"\nMaximum no: "<<maxNo<<endl;
 
  return 0;

}