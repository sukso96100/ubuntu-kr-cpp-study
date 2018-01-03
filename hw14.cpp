#include<iostream>

using namespace std;

int main() {
    char *pstr = new char[100];
    // 이곳을 채워서 완성해봅니다
    strcpy(pstr, "Hello");
    cout << "pstr : " << pstr << endl;;
    delete[] pstr;
    return 0;
}
