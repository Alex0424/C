#include <stdio.h>
#include <string.h>

typedef struct Desktop {  // create struct type with tag name Desktop so it can be used as a function parameter type or to create variables of type Desktop
  char name[50];
  int cores_amount;
  float core_ghz_speed;
  int ram_size;
  int storage_gb_size;
} Desktop;                // creates a typedef alias Desktop so we can write Desktop instead of struct Desktop

void printDesktop(Desktop d) {
    printf("Name: %s\n", d.name);
    printf("CPU cores: %d\n", d.cores_amount);
    printf("Speed: %.2f GHz\n", d.core_ghz_speed);
    printf("RAM: %d GB\n", d.ram_size);
    printf("Storage: %d GB\n", d.storage_gb_size);
}

int main() {
  Desktop d1; // Declare a new variable Desktop using the typedef alias
  strcpy(d1.name, "Lenovo");
  d1.cores_amount = 16;
  d1.core_ghz_speed = 5.20;
  d1.ram_size = 32;
  d1.storage_gb_size = 1024;
  printDesktop(d1); // All variables must be initialized before being read to avoid indeterminate value
  printf("\n%s desktop has %d CPU cores\n\n", 
      d1.name,
      d1.cores_amount); // print manually

  Desktop d2 = {"Dell", 8, 3.4, 16, 512}; // Declare and initialize a Desktop struct
  printDesktop(d2);

  return 0;
}
