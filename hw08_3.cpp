#include<iostream>

using namespace std;
 int main(){
   int height = 10;
   for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - 1 - i; j++) {
            cout << ' ';
        }
        if(i==(height/2)+1){
          for (int j = 0; j < i * 2 + 1; j++) {
            cout << '*';
          }
        }else{
          cout << '*';
          for (int j = 0; j < i * 2 - 1; j++) {
              cout << ' ';
          }
          if(i>0){
            cout << '*';
          }
        }
        cout << endl;
    }
 }
