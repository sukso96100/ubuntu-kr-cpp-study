#include<iostream>

using namespace std;

struct product{
  string name;
  string country;
  int price;
  string os;
};

int main(){
  product laptop = {"good-laptop", "", 900000, ""};
  string input;
  cout << "enter your country :" << endl;
  cin >> input;
  laptop.name = laptop.name.append("-"+input);
  laptop.country = input;
  if(input.compare("ko")==0){
    laptop.os = "none";
  }else if(input.compare("en")==0){
    laptop.os = "pre-install";
  }

  cout << "name - " << laptop.name << endl;
  cout << "country - " << laptop.country << endl;
  cout << "price - " << laptop.price << endl;
  cout << "os - " << laptop.os << endl;
}
