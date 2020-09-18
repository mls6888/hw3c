//Author Michael Sullivan
//Section 11r
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>


int digit_sum(int n) {
  if (n == 0) {
    return 0;
  }
  else {
  return (n%10) + digit_sum(n / 10);
 }
}

int main(void) {
  int number = atoi(readline("Enter an int: "));
  printf("sum of digits is %d.\n",digit_sum(number))
  ;
  digit_sum(number);
}
