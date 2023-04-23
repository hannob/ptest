#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main(int argc, char **argv) {
  FILE *f;

  if (argc == 1) {
    printf("Usage:\nwritesafe [secret]\n");
    return 1;
  }

  f = fopen("secret.txt", "w");
  chmod("secret.txt", 0600);

  fwrite(argv[1], strlen(argv[1]), 1, f);
  fclose(f);
}
