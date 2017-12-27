#include<iostream>
using namespace std;
int main(){
  int score = 0;
    cout << "enter your score : ";
    cin >> score;
    cout << endl;

    //이곳에 if, else if, else를 조합하여 코드를 완성합니다.
    if(score >=80 && score <=100)
      cout << 'A' << endl;
    else if(score >= 60 && score <= 79)
      cout << 'B' << endl;
    else if(score >= 40 && score <= 59)
      cout << 'C' << endl;
    else if(score >= 0 && score <= 39)
      cout << 'E' << endl;
    else
      cout << "범위 벗어남." << endl;
    return 0;
}
