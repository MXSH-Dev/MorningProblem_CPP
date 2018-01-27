#include <iostream>
#include <cmath> // for sqrt

using namespace std;

// Compute the greatest integer d such that d*d <= n
// (i.e. the floor of the square root).
//
// You may use this function or ignore it, it's up to you.
int integer_sqrt(unsigned int x) {
  unsigned int d(sqrt(x));

  // should iterate at most once, probably none
  while ((d+1)*(d+1) <= x) {
    ++d;
  }

  // probably does not iterate even once
  while (d*d > x) {
    --d;
  }

  // now at this point we know (d+1)*(d+1) > x yet d*d <= x

  return d;
}

int main() {
  // declare your variables

  // read the input

  // solve the problem

  // print the answer
  unsigned int num;

  cin>>num;

  unsigned int sqrt1 = integer_sqrt(num);

  bool sos = false;

  for(unsigned int i = 0;i <=sqrt1;i++){
    unsigned int temp = i*i+sqrt1*sqrt1;
    if(temp == num){
      sos = true;
      break;
    }
    else if (i == sqrt1){
      sqrt1 = sqrt1 -1;
      i = 0;
      continue;
    }
  }

  if(sos == false){
    cout<<"not sum of squares"<<endl;
  }
  else{
    cout<<"sum of squares"<<endl;
  }


  return 0;
}
