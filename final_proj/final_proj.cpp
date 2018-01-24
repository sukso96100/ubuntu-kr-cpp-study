#include <iostream>
#include <string>
#include <vector>
#include "student.h"

using namespace std;

int main(){
  string path;
  vector<student> students;
  cout << "불러들일 파일 경로를 입력하세요. >";
  cin >> path;
  cout << path << " 파일을 불러옵니다." << endl;
  students = load_data(path);

  while(true){
    int selection;
    cout << "학생 목록 :" << endl;
    print_students(students);
    cout << "(0)추가, (1)삭제, (2)검색, (3)정렬, (4)성적 변환, (5)저장 후 종료 >";
    cin >> selection;

    switch(selection){
      case 0:
        string name, id;
        int grade;
        cout << "이름(문자열) >";
        cin >> name;
        cout << "학번(문자열) >";
        cin >> id;
        cout << "학점(정수) >";
        cin >> grade;

        student new_student = {name, id, grade};
        students.push_back(new_student);
        break;
      case 1:
        int criteria;
        string keyword;

        cout << "검색 기준 : (0)이름, (1)학번 >";
        cin >> criteria;

        cout << "검색 키워드 >";
        cin >> keyword;

        int index = find_student(students, criteria, keyword);
        print_student(students[index]);
        students.erase(index);
        cout << index << "번째 학생 삭제됨." << endl;
        break;
      case 1:
        int criteria;
        string keyword;
        cout << "검색 기준 : (0)이름, (1)학번 >";
        cin >> criteria;

        cout << "검색 키워드 >";
        cin >> keyword;

        int index = find_student(students, criteria, keyword);
        print_student(students[index]);
        break;
      case 3:
        int criteria;
        cout << "정렬 기준 : (0)학번, (1)성적 >";
        cin >> criteria;

        switch (criteria) {
          case 0:
            sort(students.begin(), students.end(), compare_id);
            break;
          case 1:
            sort(students.begin(), students.end(), compare_grade);
            break;
        }
        break;
      case 4:
        break;
      case 5:
        save_data(path, students);
        break;
    }
  }

  return 0;
}
