
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  fprintf(stderr, "EACCES %s\n", strerror(EACCES));
  errno = ENOENT;
  perror(argv[0]);
  return 0;
}