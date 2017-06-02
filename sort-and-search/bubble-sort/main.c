#include <stdio.h>
#include "bubblesort.h"

#define ELEM_NUM(x)   (sizeof(x)/sizeof((x)[0]))

int main(int argc, char *argv[])
{
  /* Example table, we could also take data directly from input  */
  /* but it is not the case of this example.                     */
  int table[] = { 4, 5, -2, -1, 16, 2, -4, 2, 0, -7, 9, 8, -10 };
  int j;
 
  printf("\nTable before bubble sort: [");
  for (j = 0; j < ELEM_NUM(table); j++)
    printf(" %d", table[j]);
  printf(" ]\n\n");
 
  bubble_sort(table, ELEM_NUM(table));
 
  printf("Table after bubble sort: [");
  for (j = 0; j < ELEM_NUM(table); j++)
    printf(" %d", table[j]);
  printf(" ]\n\n"); 
  
  return 0;
}
