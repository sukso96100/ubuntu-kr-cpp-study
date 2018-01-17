#include<iostream>
#include<algorithm>
#include<vector>
#include<time.h>

using namespace std;

int main(){
  srand((unsigned int)time(0));
  int array_int[100];
  for(int i=0; i<100; i++){
    array_int[i] = (rand() % 1000 + 1);
  }
	vector<int> vec(array_int,array_int+99);
  sort(vec.begin(), vec.end());

  cout << "검색할 숫자 입력 >";

  int to_search;
  cin >> to_search;

  cout << "이진 검색 결과(1: 있음, 0: 없음) : " << binary_search(vec.begin(), vec.end(), to_search) << endl;
}
