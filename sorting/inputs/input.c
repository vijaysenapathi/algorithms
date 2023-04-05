#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void print_random_array(unsigned size, unsigned range) {
  int random = (rand() % range) + 1;
  printf("%d", random);
  for (unsigned i = 0; i < size; i++) {
    random = (rand() % range) + 1;
    printf(" %d", random);
  }
  printf("\n");
}


int main(void) {
  srand(time(NULL));
  unsigned samples = 20;
  for (unsigned i = 0; i < samples; i++) {
    print_random_array(20, 100);
  }
  return 0;
}

