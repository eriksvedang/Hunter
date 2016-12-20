#define HUNTER_ENABLED

#include "hunter.h"

int main() {
  int *ip = malloc(sizeof(int));
  float *fp = malloc(sizeof(float));
  char *sp = malloc(sizeof(char*) * 256);
  free(fp);
  hunter_print_allocations();
}
