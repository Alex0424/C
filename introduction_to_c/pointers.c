#include <stdio.h>

int main() {
  int x = 5;
  int *p = &x; // &x gives the address of x, *p is pointer to int storing that address

  printf("address of x stored in x: %p\n", &x);
  printf("address of x stored in p: %p\n", (void *)p);
  printf("value of x through the p pointer: %d\n", *p); // *p = give value stored at the address in p
  printf("value of x: %d\n\n", x);

  *p = 10; //modifying the value of x from p
  printf("x has been modified via a pointer\n");
  printf("value of x through the p pointer: %d\n", *p);
  printf("value of x: %d\n", x);

  return 0;
}

/* 
address: 0x100

p ────> 0x100 ────> 5
        (x)
*/
