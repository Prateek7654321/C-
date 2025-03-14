#include <stdio.h>
#include <stdlib.h>

int isPrime(int x) {
  int i;
  for (i = 2; i <= x / 2; ++i) {
    if (x % i == 0) return 0;
  }
  return 1;
}

int main() {
  int n, i, j, count = 1, input, flag;
  int *ptr = (int *)malloc(sizeof(int)); 
  printf("Enter a number: ");
  scanf("%d", &ptr[0]);

  printf("Do you want to enter more elements? (1 = yes, 0 = no) ");
  scanf("%d", &flag);

  while (flag) {
    ptr = (int *)realloc(ptr, (count + 1) * sizeof(int)); 
    printf("Enter a number: ");
    scanf("%d", &ptr[count]);
    ++count;
    printf("Do you want to enter more elements? (1 = yes, 0 = no) ");
    scanf("%d", &flag);
  }

  n = count;
  printf("The prime numbers are: ");
  for (i = 0; i < n; ++i) {
    if (isPrime(ptr[i])) printf("%d ", ptr[i]);
  }
  free(ptr);
  return 0;
}