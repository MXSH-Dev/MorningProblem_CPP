#include <iostream>
#include <algorithm> // includes the abs() function


//xiaojie xing
//ID: 1502319


using namespace std;

int main() {
  int m;
  int p[1000][2]; // p[i][j] = coordinate j of the i-th point in the input
  int q[2];       // The point q at the end of the input


  // read the first line
  cin >> m;

  // now read the points so that q[i][j] is the j'th coordinate of the i'th point of the input
  for (int i = 0; i < m; i++) {
    cin >> p[i][0] >> p[i][1];
  }
    cin>> q[0]>>q[1];

  for(int j=0;j<m;j++){
    int d = abs(q[0]-p[j][0])+abs(q[1]-p[j][1]);
    cout<<d<<" ";
  }

  // TODO: don't forget to also read the point q from the input!

  // Solve the problem and output the answer.

  return 0;
}
