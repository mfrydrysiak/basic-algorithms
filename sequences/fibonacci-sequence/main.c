#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long unsigned int fibonacci(int num)
{
  if (num == 0)
    return 0;
  else if (num == 1)
    return 1;
  else
    return ( fibonacci(num-1) + fibonacci(num-2) );
}

int main(int argc, char *argv[])
{
  if (argc == 1) {
    printf("Not enough input arguments! Use -h option for more info.\n");
    printf("Aborting...\n");
    return -1;
  }

  if (strlen(argv[1]) == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
    printf("Program calculates subsequent Fibonacci numbers. To run the program, type:\n");
    printf("./fibonacci num var\n");
    printf("\tnum - amount of the Fibonacci numbers\n");
    printf("\tvar - method variant (0 - normal, 1 - recursively)\n");
    printf("For help type: ./fibonacci -h\n");
    return -1;
  }

  if (argc != 3) {
    printf("Error: wrong number of input parameters. To run the program, type:\n");
    printf("./fibonacci num var\n");
    printf("\tnum - amount of the Fibonacci numbers\n");
    printf("\tvar - method variant (0 - normal, 1 - recursively)\n");
    printf("For help type: ./fibonacci -h\n");
    printf("Aborting...\n");
    return -1;
  }

  /* Check, whether the string is valid or not */
  int i;
  for (i = 0; i < strlen(argv[1]); i++)
    if (argv[1][i] > '9' || argv[1][i] < '0') {
      printf("<num> parameter must be integer!\n");
      printf("For help type: ./fibonacci -h\n");
      printf("Aborting...\n");
      return -1;
    }

  for (i = 0; i < strlen(argv[2]); i++)
    if (argv[2][i] != '1' && argv[2][i] != '0') {
      printf("<var> parameter must be 0 (normal method) or 1 (recursive method)!\n");
      printf("For help type: ./fibonacci -h\n");
      printf("Aborting...\n");
      return -1;
    }
      
  int num = atoi(argv[1]);
  int var = atoi(argv[2]);
  long unsigned int new_val, first_val = 0, second_val = 1;

  printf("Sequence of %d Fibonacci numbers:\n", num);

  switch (var) {
  case 0:
    for (i = 0; i < num; i++) {
      printf("%lu\n", first_val);
      new_val = first_val + second_val;
      first_val = second_val;
      second_val = new_val;
    }
    break;
  case 1:
    for (i = 0; i < num; i++) {
      printf("%lu\n", fibonacci(i));
    }
    break;
  default:
    break;
  }

  return 0;
}
