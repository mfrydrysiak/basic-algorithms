#include <stdio.h>
#include <string.h>

void swap(char *p, char *q)
{
  char temp = *p;
  *p = *q;
  *q = temp;
}

int main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("Error! To run this program correctly, type:\n");
    printf("./strinvert string\n");
    printf("Aborting...\n");
    return -1;
  }

  printf("Non-inverted (input) string:\t %s\n", argv[1]);

  int len = strlen(argv[1]);
  int maxindex, index;

  if (len == 1) {
    printf("Inverted (output) string:\t %s\n", argv[1]);
    return 0;
  }

  if (len % 2 == 0)
    maxindex = (len/2);
  else
    maxindex = ((len-1)/2);

  for (index = 0; index < maxindex; index++)
    swap(&argv[1][index], &argv[1][len-1-index]);

  printf("Inverted (output) string:\t %s\n", argv[1]);

  return 0;
}
