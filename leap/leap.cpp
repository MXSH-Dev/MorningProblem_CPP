

#include <iostream>

using namespace std;

int main() {
  int year;
  cin >> year;

  // check if year is between 1582 to 9999
  if(year>=1582 && year<=9999){

    // a leap year is when it is divisible by 4 and not divisible
    // by 100, or it is divisible by 400.
    if(year % 4 ==0 && year % 100 !=0){
      cout<<"yes"<<endl;
    }
    else if (year % 400 == 0){
      cout<<"yes"<<endl;
    }
    else{
      cout<<"no"<<endl;
    }
  }
  // Put your code here!

  return 0;
}
