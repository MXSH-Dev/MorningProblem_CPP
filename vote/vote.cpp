#include <iostream>

using namespace std;

int main() {

  int vote[1001] = {0};

  // keep reading until we see 0
  while (true) {
    int temp;
    cin >> temp;
    if (temp == 0) {
      break;
    }
    vote[temp] +=1;
  }

  int first = 0;
  int second =0;

  for(int i =1; i < 1001;i++){
    if(vote[i]>=vote[first]){
      second = first;
      first =i;
    }
  }

  if(vote[second]<vote[first]){
    cout<<first<<endl;
  }
  else{
    cout<<"tie"<<endl;
  }


  // now n == # votes and vote[i] is the i'th vote
  // for 0 <= i <= n-1

  // solve the problem and print the answer

  return 0;
}
