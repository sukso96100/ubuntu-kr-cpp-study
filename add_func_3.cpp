#include<iostream>

using namespace std;
  bool isPrime(int n){
    if(n==0 || n==1){
      return false;
    }
    for(int i=2; i<n; i++){
      if(n%i==0){
        return false;
      }
    }
    return true;
  }

  void showPrimesInRange(int a, int b){
    for(int i=a; i<=b; i++){
      if(isPrime(i)){
        cout << i << ", ";
      }
    }
  }
 int main(){
   showPrimesInRange(1,10);
 }
