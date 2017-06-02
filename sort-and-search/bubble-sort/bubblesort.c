
/* Created by: Marek Frydrysiak */

void swap(int *p, int *q)
{
  int temp = *q;
  *q = *p;
  *p = temp;
}
 
void bubble_sort(int *pt, unsigned int elem_num)
{
  int i, sorted;
  int *ptmp = pt;
 
  do
  {
    sorted = 1;
    ptmp = pt;
    
    for (i = 0; i < (elem_num-1); i++)
    {
      if (*ptmp > *(ptmp+1))
      {
        swap(ptmp, (ptmp+1));
        sorted = 0;
      }
      ptmp++;
    }  
  } while (sorted != 1);
}
