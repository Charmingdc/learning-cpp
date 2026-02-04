#include <iostream>

using namespace std;

int main() {
  cout << "Enter first number" << endl;

  char a;
  cin >> a;

  cout << "Enter second number" << endl;

  char b;
  cin >> b;

  char sum = a + b;

  cout << "The sum of a + b is " << sum << endl;

  /* 
   NOTE: performing arithmetic operation on other data types defaults to the additon of their ASCII Code 
   
   ASCII = American Standard Code for Information Exchange
   
   For Numbers
   0 -> 48
   1 -> 49...... to number 9
   
   For Alphabets (Upper Case)
   A -> 65 
   B -> 66.... Z
   
   For Alphabets (Lower Case)
   a -> 97
   b -> 98..... z
 */
}