#include<iostream>

using namespace std;

int adiff(int A,int B){
  int C;
  if(A>B){
    C=(A-B)%360;
  }
  else{
    C=(B-A)%360;
  }
  if(C >180){
 C =360 -C;
  }

  return C;
}

int main(){
  cout << adiff(180,270)<< "\n";
  cout << adiff(210,45)<< "\n";
  cout << adiff(0,360)<< "\n";
  cout << adiff(10,350)<< "\n";
  cout << adiff(95,260)<< "\n";
  cout << adiff(90,-90)<< "\n";
  cout << adiff(1000,280)<< "\n";
  cout << adiff(60,244);
}
