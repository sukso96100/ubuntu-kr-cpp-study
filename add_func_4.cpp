#include<iostream>

using namespace std;
void zero_small(int *a, int *b){
  if(*a<*b){
    *a = 0;
  }else if(*b<*a){
    *b = 0;
  }
}
int main(){
  int a=3, b=6;
  zero_small(&a, &b);
  cout << a << ", " << b << endl;
}
