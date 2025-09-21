#include <stdio.h>

int main(){

  // Integers
  char test_char = 127; // range -128 to 127, guaranteed to be at least 8 bits wide
  int test_int = -32768; // range -32,768 to 32,767, guaranteed to be at least 16 bits wide
  long test_long = 2100200300; // guaranteed to be at least 32 bits wide
  long long test_long_long = -9100200300400500600; // guaranteed to be at least 64 bits wide

  printf("%d\n", test_char);
  printf("%d\n", test_int);
  printf("%ld\n", test_long);
  printf("%lld\n\n", test_long_long);

  // Unsigned Integers
  unsigned char test_u_c = 255; // range 0 to 255, guaranteed to be atleast 8 bits wide
  unsigned short test_u_s = 65535; // range 0 to 65,535, guaranteed to be at least 16 bits wide
  unsigned int test_u_i = 65535; // range 0 to 65,535, guaranteed to be at least 16 bits wide
  unsigned long test_u_l = 4294967295; // range 0 to 4,294,967,295, guaranteed to be at least 32 bits wide
  unsigned long long test_u_ll = 18446744073709551615ULL; // range 0 to 18,446,744,073,709,551,615, guaranteed to be at least 64 bits wide

  printf("%d\n", test_u_c);
  printf("%u\n", test_u_s);
  printf("%u\n", test_u_i);
  printf("%lu\n", test_u_l);
  printf("%llu\n\n", test_u_ll);
 

  // Floating Point Numbers
  float test_float = 3.4E+38F;
  // stores a single-precision floating-point number, provides at least 6 decimal digits of precision, guaranteed range at least 1E-37 to 1E+37.
  double test_double = 1.7E+308;
  // stores a double-precision floating-point number, provides at least 10 decimal digits of precision, guaranteed range at least 1E-37 to 1E+37.

  printf("%d\n", test_float);
  printf("%d\n\n", test_double);

  // Structures
  // later

  // BOOL: C dont have bool type and is defined usually by the following notation:
  #define BOOL char;
  #define FALSE 0;
  #define TRUE 1;
}


