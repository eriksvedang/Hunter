#include "hunter.h"

int main() {
  int *ip = MALLOC(sizeof(int));
  float *fp = MALLOC(sizeof(float));
  char *sp = MALLOC(sizeof(char*) * 256);
  FREE(fp);
  hunter_print_allocations();
}
