#include <iostream>
#include <ostream>

using namespace std;

int main() {
  cout << "Data Types in C++" << endl;

  cout << "Data Type \t" << "Note" << endl;

  cout << "int: \t"
       << "used to define integers value with range between: 2^31 - 2^32 - 1 ( "
          "4 bytes )"
       << endl;
  cout << "long: \t"
       << "a type modifier used for specifying larger integers with max range "
          "of 2^64 ( 8 bytes )"
       << endl;
  cout << "float: \t" << "for decimals" << endl;
  cout << "double : \t" << "for large decimals" << endl;
  cout << "char: \t"
       << "used to define a single character, must be wrapped in single quotes "
          "and must only be a single value, e.g \'a\', \'1\'"
       << endl;
  cout << "string: \t"
       << "a string type annotation i.e multiple characters, must be wrapped "
          "in double quotes"
       << endl;

  // decimals defaults to floats unless specfied explicitly
  // types can also be specified by attaching it's first letter at the end of a
  // value e.g "1.0f"
}