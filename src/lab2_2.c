#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  long long factorial = 1;
  while (n > 0) {
    factorial = factorial * n;
    n--; /* code */
  }

  // TODO: compute factorial iteratively
  return factorial;  // placeholder
}

int main(void) {
  int n;
  int output;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);
  if (n <= 0) {
    printf("the number must be greater than 0\n"); /* code */
  }
   else {
    output = factorial(n);
    printf("The factorial is %d\n", output);
  }

  // TODO: validate input, call function, print result

  return 0;
}
