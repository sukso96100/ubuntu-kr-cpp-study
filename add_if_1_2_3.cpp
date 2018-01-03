#include <iostream>
using namespace std;
int main(){
    int input;
    cout << "정수 입력 >";
    cin >> input;

    if(input%2==0){
      cout << input << " 은(는) 짝수입니다" << endl;
    }else{
      cout << input << " 은(는) 홀수입니다" << endl;
    }

    if(input>0){
      cout << input << " 은(는) 양수입니다" << endl;
    }else if(input==0){
      cout << input << " 은(는) 0 입니다" << endl;
    }else{
      cout << input << " 은(는) 음수 입니다" << endl;
    }

    int abs_val;
    if(input > 0){
      abs_val = input;
    }else{
      abs_val = -input;
    }

    cout << input << " 의 절댓값은 " << abs_val << " 입니다." << endl;
    return 0;
}
