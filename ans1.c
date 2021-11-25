#include <stdio.h>
int max(int a,int b){
  return a>b?a:b;
}
int main()
{
  int n, m, i, j;
  scanf("%d%d", &n, &m);
  int And_re = -1;
  int Or_re = -1;
  int xor_re = -1;
  for (i = 1; i <= n; i++)
  {
    for (j = i + 1; j <= n; j++)
    {
      int m1 = max(And_re, i & j);
     // printf("%d ",i&j);
      if (m1 <m)
      {
        And_re = m1;
      }

      int m2 = max(Or_re, i | j);
      if (m2 < m)
      {
        Or_re = m2;
      }
      int m3 = max(xor_re, i ^ j);
      if (m3 < m)
      {
        xor_re = m3;
      }
    }
  }
  if(And_re==-1) And_re=0;
   if(Or_re==-1) Or_re=0;
    if(xor_re==-1) xor_re=0;

  printf("%d\n", And_re);
  printf("%d\n", Or_re);
  printf("%d\n", xor_re);
}