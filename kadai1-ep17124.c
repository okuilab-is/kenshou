#include<stdio.h>

int main(void){
   int n, a[13], num, h;

   scanf("%d ", &n);

   for ( int i = 0; i < n; i++ ) a[i] = -1;

   for ( i = 0; i < n; i++ ) {
      scanf("%d ", &num);
      h = num % 13;
      while ( a[h] == -1 ) h = ( num + 1 ) % 13;
      a[h] = num;
   }

   printf("%s ", h);

   return 0;
} 

