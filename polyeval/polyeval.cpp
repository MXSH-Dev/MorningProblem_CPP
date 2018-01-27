#include <iostream>

using namespace std;

int main() {
  // Declare your variables

  // Read the input

  // Solve the problem

  int d,x,m;
  cin>>d>>x>>m;

  int power[d+1];
  power[0]=1;

  for(int i =1; i<d+1; i++){
    power[i] = (power[i-1]*x) % m;
  }

  int ak[d+1];

  for(int i =0;i<d+1;i++){
    cin>>ak[i];
  }

  int answer = ak[0] %m;

  for (int i =1; i<d+1;i++){
    answer = (answer+(ak[i]%m)*power[i])%m;
  }

  cout<<answer<<endl;

  return 0;
}
