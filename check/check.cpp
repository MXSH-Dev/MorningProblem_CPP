#include <iostream>

// Xiaojie Xing
// ID: 1502319

using namespace std;

int main() {
  int d1, d2, d3, d4;

  cin >> d1 >> d2 >> d3 >> d4;

  // Put your code here!
  int m1 = d1*1;
  int m2 = d2*2;
  int m3 = d3*3;
  int m4 = d4*4;
  int sum = m1+m2+m3+m4;

  if(sum%5 == 0){
    cout<<"yes"<<endl;
  }
  else{
    cout<<"no"<<endl;
  }
  return 0;
}
