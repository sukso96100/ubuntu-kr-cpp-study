#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main(){
  string path;
  vector<student> students;
  cout << "불러들일 파일 경로를 입력하세요. >";
  cin >> path;
  cout << path << " 파일을 불러옵니다." << endl;
  students = *load_data(path);

  while(true){
    int selection, criteria, index;
    string keyword;
    student* new_item;
    string name, id;
    int grade;

    cout << "학생 목록 :" << endl;
    print_students(students);
    cout << "(0)추가, (1)삭제, (2)검색, (3)정렬, (4)성적 변환, (5)저장 후 종료 >";
    cin >> selection;

    switch(selection){
      case 0:
        cout << "이름(문자열) >";
        cin >> name;
        cout << "학번(문자열) >";
        cin >> id;
        cout << "학점(정수) >";
        cin >> grade;

        new_item = new_student(name, id, grade);
        students.push_back(*new_item);
        break;
      case 1:
        cout << "검색 기준 : (0)이름, (1)학번 >";
        cin >> criteria;

        cout << "검색 키워드 >";
        cin >> keyword;

        index = find_student(students, criteria, keyword);
        print_student(&students[index]);
        students.erase(students.begin()+index);
        cout << index << "번째 학생 삭제됨." << endl;
        break;
      case 2:
        cout << "검색 기준 : (0)이름, (1)학번 >";
        cin >> criteria;

        cout << "검색 키워드 >";
        cin >> keyword;

        index = find_student(students, criteria, keyword);
        print_student(&students[index]);
        break;
      case 3:
        sort(students.begin(), students.end());
        break;
      case 4:
        to_abcdf(students);
        break;
      case 5:
        save_data(path, students);
        return 0;
    }
  }

  return 0;
}
