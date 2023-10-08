#include<stdio.h>
#include<stdlib.h>
    int main()
{
     int i, n;
     time_t t;
     n = 1;
     srand((unsigned) time(&t));
      for( i = 0 ; i < n ; i++ ) 
    {
      printf("\n\t Genrated Number: %d ", rand());
    }
}
