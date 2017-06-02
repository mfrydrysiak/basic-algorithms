
/* Created by: Marek Frydrysiak */

void swap(int *p, int *q)
{
  int temp = *q;
  *q = *p;
  *p = temp;
}
 
void selection_sort(int *pt, unsigned int elem_num)
{
  unsigned int cx, index = 0;
  int cmin, cminx;
  int *ptmp = pt;

  while (index < elem_num)
  {
    cmin = *ptmp;

    for (cx = index + 1; cx < elem_num; cx++)
      if (pt[cx] < cmin)
      {
        cmin = pt[cx];
        cminx = cx;
      }

    if (cmin < *ptmp)
      swap((pt+cminx), ptmp);

    index++;
    ptmp++;
  }
}

