#include <iostream>

using namespace std;
// hard test fail is acceptable

// soft test fail is not acceptable

// error is compilar error, code not working

int main() {

  // for desktop, int is 32 bit by defult
  // long int will force it to be 32 bit
  int a, b;

  cin >> a >> b;

  // solve the problem
  // first solution
  int solution = a-b;
  if(solution < 0){
    solution = -solution;
  }
  // output the solution
  cout<< solution<<endl;
  return 0;
}
