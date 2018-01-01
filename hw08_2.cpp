#include<iostream>

using namespace std;
 int main(){
   for(int i=1; i<=9; i++){
     if(i%2==0){
       for(int j=1; j<=9; j++){
         if(j%2==0){
           cout << i <<  "*" << j << "=" << i*j << endl;
         }
       }
     }
   }
 }
