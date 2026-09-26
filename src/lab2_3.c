#include <stdio.h>
#include <math.h>
/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
    int i=2;
    if(n<2){
        return 0;
    }
    while(i<= sqrt(n)){
        if(n % i == 0){
            return 0;
        }
        i++;
    }

    
    // TODO: check if n is prime using loop up to sqrt(n)
    return 1; // placeholder
}

int main(void) {
    int n;
    int i=2;
    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);
    if(n < 2){
        printf("enter higher number\n");
        return 0;
    }
    printf("The prime numbers up to %d\n are: ", n);
    while(i <=n){
        if(is_prime(i)==1){
           
            printf("%d\n", i);
        }
        i++;

    }
   
    // TODO: validate input and print all primes up to n

    return 0;
}
