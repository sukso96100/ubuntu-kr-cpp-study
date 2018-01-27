
#include "student.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <boost/algorithm/string.hpp>

using namespace std;

student* new_student(string name, string id, int grade){
  student *item = new student;
  item->name = name;
  item->id = id;
  item->grade = grade;
  return item;
}

vector<student>* load_data(string path){
  ifstream file;
  file.open(path);

  string line;
  vector<student>* students = new vector<student>();

  while(getline(file, line)){
    vector<string> words;
    boost::split(words, line, boost::is_any_of(" "));
    student item = {words[0], words[1], stoi(words[2])};
    students->push_back(item);
  }

  file.close();
  return students;
};

void save_data(string path, vector<student> students){
  ofstream file;
  file.open(path);

  for(student& item : students){
    file << item.name << " " << item.id << " " << item.grade << endl;
  }

  file.close();
}

void print_student(student *item){
  cout << item->name << " " << item->id << " " << item->grade << endl;
}

void print_students(vector<student> students){
  for(student& item : students){
    cout << item.name << " " << item.id << " " << item.grade << endl;
  }
}

int find_student(vector<student> students, int criteria, string keyword){
  int i=0;
  for(student& item : students){
    switch (criteria) {
      case 0:
        if(item.name.compare(keyword)==0){
          return i;
        }
        break;
      case 1:
        if(item.id.compare(keyword)==0){
          return i;
        }
        break;
    }
    i++;
  }
  return -1;
}

void to_abcdf(vector<student> students){
  for(student& item : students){
    if(item.grade > 90){
      cout << item.name << "/A+" << endl;
    }else if(item.grade > 80){
      cout << item.name << "/A" << endl;
    }else if(item.grade > 70){
      cout << item.name << "/B+" << endl;
    }else if(item.grade > 60){
      cout << item.name << "/B" << endl;
    }else if(item.grade > 50){
      cout << item.name << "/C+" << endl;
    }else if(item.grade > 40){
      cout << item.name << "/C" << endl;
    }else if(item.grade > 30){
      cout << item.name << "/D+" << endl;
    }else if(item.grade > 20){
      cout << item.name << "/D" << endl;
    }else{
      cout << item.name << "/F" << endl;
    }
  }
}
