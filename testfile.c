#include <stdio.h>


int main(void) {
  char array[3] = {10, 15, 20};
  char *ptr = array;
  puts("Beginning");
  printf("%p\n", array);
  printf("%d\n", array[2]);
  printf("%p\n", ptr);

  char *hello= "Hello World!";
  printf("%s\n", hello);
  return 0;

}
