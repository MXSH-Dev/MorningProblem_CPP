#include <iostream>
#include <algorithm> // for max()

using namespace std;

int main() {
  // declare variables

  // read the input

  // compute the answer

  // print the output

  int aLen;
  cin>>aLen;

  // int plateau =0;
  int plateau_length =1;

  // int Tplateau1 =0;
  // int Tplateau2 =0;
  int Tplateau_length =1;

  int arr[aLen];
  for(int i =0;i<aLen;i++){
    cin>>arr[i];
  }

  for(int j =0;j<aLen-1;j++){
    if(arr[j]==arr[j+1]){
      Tplateau_length +=1;
    }
    else{
      Tplateau_length =1;
    }
    if(Tplateau_length>=plateau_length){
      plateau_length = Tplateau_length;
    }
    // else{
    //   Tplateau = arr[j];
    //   Tplateau_length =1;
    // }
  }

  cout<<plateau_length<<endl;

  return 0;
}
