#include<iostream>

using namespace std;

enum theater {
    // theater_1,theater_2,theater_3에 대한 정의를 여기에 작성합니다.
    // 단, 시작점은 1입니다.
    theater_1=1,
    theater_2=2,
    theater_3=3
};

int main(){
  int a=0;
  cout << "enter number(1-3) : ";
  cin >> a;


  switch(a){
  // 입력(1,2,3)이 받아진다면, switch문으로 "@번 극장을 선택하셨습니다."라고 출력합니다.
  // 만약 그 외 번호 입력이 있다면 프로그램을 끄는 것으로 작성합니다.
    case theater_1:
      cout << "theater_1" << endl;
      break;
    case theater_2:
      cout << "theater_2" << endl;
      break;
    case theater_3:
      cout << "theater_3" << endl;
      break;
    default:
      cout << "not found." << endl;
      break;
  }

  return 0;
}
