#include <stdio.h>

int main()
{
   int T, sec, i, j;
   scanf("%d", &T);

   int arr[T];

   for(i=0; i<T; i++)
   {
      scanf("%d\n", &arr[i]);

   }

   for(i=0; i<T; i++)
   {
      int num = arr[i];
      sec=0;
      if(num == 1) {
         printf("No\n");
      } else{
         for(j=2; j<= num/2; j++)
         {

            if( num%j==0)
            {
               sec=1;
               break;
            }

         }

         if(sec==1)
            printf("No\n");
         else
            printf("Yes\n");

      }

   }

   return 0;
}
