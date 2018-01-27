#include <iostream>
#include <cmath> // for sqrt

using namespace std;

// given a positive integer n <= 4,000,000 this returns the smallest
// integer d such that d*d > n
//
// not needed to solve the problem, but some might find it helpful
unsigned int upper_sqrt(unsigned int n) {
  unsigned int d(sqrt((double) n));

  // should iterate at most one or twice
  while (d*d <= n) {
    ++d;
  }

  return d;
}

bool ifPrime(unsigned int n){
  if(n == 1){
    return false;
  }
  if(n == 2){
    return true;
  }
  if(n % 2 == 0){
    return false;
  }

  for(unsigned i =3; i <= upper_sqrt(n); i = i+2){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}

int main() {
  // read in the integer
  // NOTE: look *carefully* at the maximum value of the number
  // in the problem description

  // see if the integer it is prime
  unsigned int n;
  cin>>n;

  if(ifPrime(n) == true){
    cout<<"prime"<<endl;
  }
  else{
    cout<<"not prime"<<endl;
  }

  // print the answer

  return 0;
}
