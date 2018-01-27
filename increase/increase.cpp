#include <iostream>

using namespace std;

int main() {
  int n;
  int array[1000];

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> array[i];
  }

  int count = 0;

    // from 0 to n-1 not n
    for(int j = 0;j < n-1;++j){
      if(array[j+1]>array[j]){
        int temp = 0;
        temp = array[j+1]-array[j];
        count = count +temp;
      }
    }
  cout<<count<<endl;

  // now compute and print the answer

  return 0;
}
