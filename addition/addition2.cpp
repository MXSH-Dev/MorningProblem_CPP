#include <iostream>

using namespace std;

int main() {
  // Declare your variables

  int digit;
  cin>> digit;

  int carry =0;

  int num1[digit];
  for(int i=0;i<digit; i++){
    cin>>num1[i];
  }
  int num2[digit];
  for(int j=0;j<digit;j++){
    cin>>num2[j];
  }

  int sum[digit+1];
  sum[0]=0;
  for(int k = digit;k>0; k--){
    int temp = num1[k-1]+num2[k-1]+carry;
    carry = temp /10;
    if(temp>9){
      sum[k] = temp-10;
    }
    else{
      sum[k] = temp;
    }
    sum[0] = carry;
  }
  for(int i =0; i< digit+1;i++){
    cout<<sum[i]<<" ";
  }
  // Read the input

  // Solve the problem

  return 0;
}
