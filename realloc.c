#include <stdio.h>
#include <stdlib.h>
int main() {
   int n = 4, i, *p, s = 0;
   p = (int*) calloc(n, sizeof(int));
   if(p == NULL) {
      printf("Error! memory not allocated.");
      exit(0);
   }
   printf("\nEnter elements of array : ");
   for(i = 0; i < n; ++i) {
      scanf("%d", &*p);
      s += *p;
   }
   printf("Sum : %d", s);
   p = (int*) realloc(p, 6);
   printf("\nEnter elements of array : ");
   for(i = 0; i < n; ++i) {
      scanf("%d",&*p);
      s += *p;
   }
   printf("\nSum : %d", s);
   return 0;
}
