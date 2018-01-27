#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int answer;

  // solve the problem

  answer = n % 3;

  if(answer == 0 or answer == 1 or answer == 2){
    cout<<answer<<endl;
  }
  else{
    answer = answer+3;
    cout<<answer<<endl;

  }



  // output the answer

  return 0;
}
