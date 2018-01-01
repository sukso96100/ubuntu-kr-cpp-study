#include<iostream>

using namespace std;

int main(){
  int player;
  int computer;
  srand((unsigned int)time(0));

  while(true){
    cout << "가위바위보(가위:1, 바위:2, 보:3) :" << endl;
    cin >> player;
    computer = rand() % 3 + 1;
    cout << "Player: " << player << " / AI: " << computer << endl;
    if(player < 0 || player > 3){
      cout << "다시 선택하세요.\n" << endl;
    }
    else if((player==1 && computer==3) ||
        (player==2 && computer==1) ||
        (player==3 && computer==2)){
          cout << "당신이 이겼습니다.\n" << endl;
        }
    else if(player == computer){
      cout << "비겼습니다.\n" << endl;
    }else{
      cout << "AI 가 이겼습니다.\n" << endl;
    }
  }
}
