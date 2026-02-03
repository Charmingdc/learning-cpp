#include <stdio.h>

int main() {
  char name[] = "Adebayo Muis,";
  char level[] = "ND 1,";
  char department[] = "Mechatronics Engineering Department,";
  char extra[] = "I'm currently learning C language.";

  printf("%s", "About me:\n");
  printf("My name is %s\n", name);
  printf("I'm a student of %s\n", department);
  printf("Currently in %s\n", level);
  printf("Extra: %s\n", extra);

  return 0;
}