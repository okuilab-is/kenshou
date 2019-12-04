#include<stdio.h>

int main(void){
   int n, a[13], num, h, i;

   scanf("%d", &n);

   for ( i = 0; i < 13; i++ ) a[i] = -1;

   for ( i = 0; i < 2; i++ ) {
      scanf("%d ", &num);
      h = num % 13;
      while ( a[h] == num ) h = ( num + 1 ) % 13;
      a[h] = num;
   }

   printf("%d\n", h);

   return 0;
} 

