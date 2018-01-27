#include <iostream>

using namespace std;

int main() {
  // Declare your variables

  // Read the input

  // Solve the problem

  int digit =0;
  int carry =0;

  cin>>digit;

  int num1[digit];
  for(int i=0;i<digit; i++){
    cin>>num1[i];
  }
  int num2[digit];
  for(int j=0;j<digit;j++){
    cin>>num2[j];
  }

  int diff[digit];
  for(int i=0;i<digit; i++){
    diff[i]=0;
  }

  for(int i=digit-1;i>=0;i--){
    int temp = num1[i]-num2[i]-carry;

    if(temp>=0){
      carry =0;
      diff[i] = temp;
    }
    else if (temp <0){
      carry = 1;
      diff[i] = temp+10;
    }

  }

  for(int i = 0; i<digit;i++){
    cout<<diff[i]<<" ";
  }

  return 0;
}
