#include <iostream>
#include <string>
using namespace std;


int main() {
  cout << "Welcome to this chat" << endl;

  cout << "What's your name ?" << endl;
  string name;
  cin >> name;
  cout << endl;

  cout << "How old are you " << name << endl;
  int age;
  cin >> age;
  cout << endl;

  cout << "What's your favor color, " << name << endl;
  string color[5] = {"white", "black", "purple", "blue", "green"};
  for(int i = 0; i < 4; i++) {
    cout << color[i] << endl;
  }
  string fColor;
  cin >> fColor;
  cout << endl;
  return 0;
}
