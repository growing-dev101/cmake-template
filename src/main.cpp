#include <iostream>
#include "moduleA.h"
#include "factorial.h"

int main(int, char**) {
   functionA();
   int n = 3;
   printf("factorial %d = %d\n", n, factorial(3));
   int i = 0;
   while(++i <5) {
      printf("%d ",i);
   }
   printf("\n");
   i= 0;
   while(i++ <5) {
      printf("%d ",i);
   }
}
