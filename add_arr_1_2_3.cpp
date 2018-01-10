#include<iostream>

using namespace std;
 int main(){
   int arr[] = {1,2,3};
   int max = arr[0];
   int min = arr[0];
   int sum = 0;

   for(int i=0; i<3; i++){
     if(arr[i]>max){
       max = arr[i];
     }
     if(arr[i]<min){
       min = arr[i];
     }
     sum += arr[i];
   }

   int tmp = arr[0];
   arr[0] = arr[2];
   arr[2] = tmp;

   cout << "max/min " << max << "/" << min << endl;
   cout << "sum/avr " << sum << "/" << sum/3 << endl;
   for(int i=0; i<3; i++){
     cout << arr[i] << ", ";
 }
}
