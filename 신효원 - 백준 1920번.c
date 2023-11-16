#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int* array;

int find(int m)
{
   for (int i = 2; i <= m; i++)
   {
      array[i] = 1;
   }
   
   for (int j = 2; j * j <= m; j++)
   {
      if (array[j] == 1)
      {
         for (int k = j * j; k <= m; k += j)
         {
            array[k] = 0;
         }
      }
   }
   return 0;
}

int main()
{
   int n, m;

   scanf("%d %d", &n, &m);

   array = (int*)malloc(sizeof(int) * (m + 1));

   find(m);

   for (int i = n; i <= m; i++)
   {
      if (array[i] == 1)
      {
         printf("%d\n", i);
      }
   }

   free(array);
}