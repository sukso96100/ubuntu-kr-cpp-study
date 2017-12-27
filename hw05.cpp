#include<iostream>
#include<time.h>

using namespace std;
int main(){
  srand((unsigned int)time(0));

  //(연습 코드)
  cout << "random : " << (rand() % 100 + 1) << endl;

  double percent;
  percent = rand() % 10000 / 100.f;
  //확률을 xx.xx 형식으로 출력되도록 작성합니다.

  double rain_percent, snow_percent;
  if(percent <= 30.f){
    rain_percent = percent; // 이곳에서 주어진 날씨 확률에 따른 현재 비 예측을 작성합니다.
    cout << "in 30 percent" << endl;
  }
  if(percent <= 10.f){
    snow_percent = percent;
    cout << "in 10 percent" << endl;
  }

  // 이곳에서 주어진 날씨 확률에 따른 현재 눈 예측을 작성합니다.

  cout << rain_percent << endl;
  cout << snow_percent << endl;

  return 0;
}
