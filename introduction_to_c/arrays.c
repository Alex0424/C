#include <stdio.h>

int main() {
  int numbers[4] = {543, 34, 10, 5};

  for (int i = 0; i < 4; i++) {
    printf("%d\n", numbers[i]);
  }
  return 0;
}

// Step-by-step: how a for loop prints each item in an array
//
//i = 0
//check: 0 < 4 → true
//
//enter block:
//    printf(numbers[0]) → prints 543
//
//exit block:
//    i++ → i becomes 1
//
//###########################
//
//check: 1 < 4 → true
//
//enter block:
//    printf(numbers[1]) → prints 34
//
//exit block:
//    i++ → i becomes 2
//
//###########################
//
//check: 2 < 4 → true
//
//enter block:
//    printf(numbers[2]) → prints 10
//
//exit block:
//    i++ → i becomes 3
//
//###########################
//
//check: 3 < 4 → true
//
//enter block:
//    printf(numbers[3]) → prints 5
//
//exit block:
//    i++ → i becomes 4
//
//###########################
//
//check: 4 < 4 → false
//exit loop
//
