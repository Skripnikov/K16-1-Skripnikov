#include <iostream>
using namespace std;

int main () {

  char[10] name;
  cout << "What you name?: ";
  cin >> name;
  if (name == "Vlad"){
    cout << "Ooo, Hello Vlad!" << endl;
  }
  else {
    cout << "Whu are you?" << endl;
  }
  return 0;
}