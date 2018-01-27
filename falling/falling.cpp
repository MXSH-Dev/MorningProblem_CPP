#include <iostream>
#include <algorithm> // for max()

using namespace std;

// void height(unsigned int n+1,int steps[n+1]){
//   int temp[n];
//   for(i=1;i<=n;i++){
//     temp[0] = steps[0];
//     if(steps[i]>= temp[0]){
//       temp[0] = steps[i];
//     }
//     else if(steps[i]>= temp[0]){
//       temp[i] = steps[i];
//     }
//   }
//   int height = temp[0] - temp[end];
//   return height;
// }

int main() {
  // declare your variables

  // read the input

  // compute the answer

  // output the answer

  unsigned int n;
  cin>>n;

  int steps[n];
  for(unsigned int i=0;i<n;i++){
    cin>>steps[i];
  }

  int tumble = 0;
  int maxTumble = 0;

  for(unsigned int j =0;j<n-1;j++){
    if(steps[j]>steps[j+1]){
      tumble = tumble + steps[j]-steps[j+1];
    }
    else{
      tumble =0;
    }
    if(maxTumble<tumble){
      maxTumble = tumble;
    }
  }
  cout<<maxTumble<<endl;


  return 0;
}

//
