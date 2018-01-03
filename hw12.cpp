#include<iostream>

using namespace std;

int main() {
    int myscore = 1000;
    //이곳을 완성합니다.

    int *ptr1 = &myscore;
    int **ptr2 = &ptr1;

    cout << **ptr2<< endl;
    return 0;
}
