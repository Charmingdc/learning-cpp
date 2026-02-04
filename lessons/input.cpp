#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Enter your name" << endl;
  string name;
  getline(cin, name);

  cout << "Enter your school name" << endl;
  string school_name;
  getline(cin, school_name);

  cout << "Enter your department name" << endl;
  string department_name;
  getline(cin, department_name);

  cout << "My name is " << name << ". I'm a student of " << school_name
       << ". I'm in " << department_name << endl;

  // sizeof - used to get the byte size of a value
  cout << sizeof("Hello World") << endl;
}