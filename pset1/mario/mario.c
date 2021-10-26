#include <stdio.h>
#include <cs50.h>

int main(void) {
  //Checks for height between 1 to 8
  int n;
  do {
    n = get_int("Height: ");
  }
  while (n < 1 || n > 8);

  for (int i = 1; i <= n; i++) {
    //Adds space before #
    for (int k = i; k < n; k++) {
        printf(" ");
        //Prints # in i times
        for (int j = 1; j <= i; j++) {
        printf("#");
        }
    printf("\n");
  }
}