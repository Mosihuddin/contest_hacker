
#include <stdio.h>

int main()
{
   int N, K, i;
   scanf("%d", &N);
   int arr[N];

   for(i=1;i<=N;i++){
      scanf("%d ", &arr[i]);
   }

   scanf("%d", &K);

   if(K > 0){
      for(i=K+1;i<=N;i++){
         printf("%d ", arr[i]);
      }
      for(i=1;i<=K;i++){
         printf("%d ", arr[i]);
      }
   }else if(K = 0){
      for(i=1;i<=N;i++){
         printf("%d ", arr[i]);
      }
   }

   return 0;
}
