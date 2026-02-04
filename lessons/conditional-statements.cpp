#include <iostream>
#include <ostream>

using namespace std;

int main() {
  // problem, create a function that checks if a number is even or odd.

  cout << "Enter a valid number : " << endl;

  int num;
  cin >> num;

  if (num > 0) {
    if (num % 2 == 0) {
      cout << "This is an EVEN number";
    } else {
      cout << "This is an ODD number";
    }
  } else {
    cout << "Please enter a valid number" << endl;
  }
}