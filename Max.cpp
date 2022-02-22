#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cout<<"Enter 3 Numbers:\n";
  cin>>a>>b>>c;

  if(a>b && a>c){
      cout<<"Max = "<<a;
  }
  else if(b>a && b>c){
      cout<<"Max = "<<b;
  }
  else{
      cout<<"Max = "<<c;
  }
  return 0;

}