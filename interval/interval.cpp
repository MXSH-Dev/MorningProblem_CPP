#include <iostream>

using namespace std;

int main() {
  int low1, high1, low2, high2;
  cin >> low1 >> high1 >> low2 >> high2;

  // now solve the problem and print the answer
if(low2 > high1 || low1 > high2){
  cout<<"disjoint"<<endl;
}
else{
  cout<<"intersect"<<endl;
}

  return 0;
}
