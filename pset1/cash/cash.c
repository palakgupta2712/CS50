#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
  float change;
  int cents;
  int coins = 0;

  //Coins available
  int quarter = 25;
  int dime = 10;
  int nickel = 5;
  int penny = 1;

  //Get change from user
  do {
    change = get_float("Change owed: ");
  }
  while (change < 0);

  //Convert dollars into cents
  cents = round(change * 100);

  while (cents >= quarter) {
    cents -= quarter;
    coins++;
  }
  while (cents >= dime) {
    cents -= dime;
    coins++;
  }
  while (cents >= nickel) {
    cents -= nickel;
    coins++;
  }
  while (cents >= penny) {
    cents -= penny;
    coins++;
  }
  //Prints coins
  printf("%i\n", coins);

}