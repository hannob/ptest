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
  if (!f) {
    printf("Failed to open file\n");
    return 1;
  }

  fwrite(argv[1], strlen(argv[1]), 1, f);
  fclose(f);

  chmod("secret.txt", 0600);
}
