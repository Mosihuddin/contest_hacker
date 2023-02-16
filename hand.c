#include <stdio.h>

int main()
{
    int N, hand;
   scanf("%d", &N);

   hand = (N*(N-1))/2;

   printf("%d", hand);

   return 0;
}
