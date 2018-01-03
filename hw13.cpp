#include<iostream>

using namespace std;

int factorial(int n){
  int result=1;
  for(int i=n; i>0; i--){
    result *= i;
  }

  return result;
}

int main() {
  int num;
  cout << "숫자 입력 > ";
  cin >> num;
  cout << num << "! ==" << factorial(num) << endl;
}
