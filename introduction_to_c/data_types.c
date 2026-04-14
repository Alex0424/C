#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <string.h>

void signed_integers() {
  signed char test_char = CHAR_MIN;            // -2⁷  to 2⁷  - 1
  signed short test_short = SHRT_MIN;          // -2¹⁵ to 2¹⁵ - 1
  signed int test_int = INT_MIN;               // at least 16 bits (commonly 32-bit on modern systems)
  signed long test_long = LONG_MIN;            // at least 32 bits (32 or 64-bit)
  signed long long test_long_long = LLONG_MIN; // at least 64 bits
  printf("signed char: %hhd\n", test_char);
  printf("signed short: %hd\n", test_short);
  printf("signed int: %d\n", test_int);
  printf("signed long: %ld\n", test_long);
  printf("signed long long: %lld\n\n", test_long_long);
}

void unsigned_integers() {
  unsigned char test_u_c = UCHAR_MAX;        // 0 to 2⁸  - 1
  unsigned short test_u_s = USHRT_MAX;       // 0 to 2¹⁶ - 1
  unsigned int test_u_i = UINT_MAX;          // at least 16 bits (commonly 32-bit on modern systems)
  unsigned long test_u_l = ULONG_MAX;        // at least 32 bits (32 or 64-bit)
  unsigned long long test_u_ll = ULLONG_MAX; // at least 64 bits
  printf("unsigned char: %hhu\n", test_u_c);
  printf("unsigned short: %hu\n", test_u_s);
  printf("unsigned int: %u\n", test_u_i);
  printf("unsigned long: %lu\n", test_u_l);
  printf("unsigned long long: %llu\n\n", test_u_ll);
}

void floating_point_numbers() {
  float test_float = 1.1234567f;          //   ~6–7 significant digits total | single-precision floating-point
  double test_double = 1.123456789012345; // ~15–17 significant digits total | double-precision floating-point
  printf("float number: %.7f\n", test_float);
  printf("double float number: %.15f\n\n", test_double);
}

void boolean() {
  bool is_true = true;
  printf("true bool digit: %d\n", is_true);
  printf("true bool check: %s\n", is_true ? "true" : "false");
  bool is_false = false;
  printf("false bool digit: %d\n", is_false);
  printf("false bool check: %s\n\n", is_false ? "true" : "false");
}

void string() {
  char name_one[] = "first"; // list of chars | same as ['f', 'i', 'r', 's', 't'] + '\0'

  char *name_two = "second";  // pointer to string literal
  
  char *name_three = malloc(10); // dynamically allocated string
  strcpy(name_three, "third");
  
  printf("first string: %s\nsecond string: %s\nthird string: %s\n",
      name_one,
      name_two,
      name_three);

  free(name_three); // release memory that was previously (name_three) allocated with malloc
}

int main(){
  signed_integers();
  unsigned_integers();
  floating_point_numbers();
  boolean();
  string();

  return 0;
}

