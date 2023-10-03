#include <stdio.h>
   int main() 
{
      int m, b[50], r, j, i;
       printf("How many Numbers you want to input:");
       scanf("%d", &m);
       printf("Enter Your Numbers");
         for (r = 0; r < m; r++)
            scanf("%d", &b[r]);
         for (r = 0; r < m-1; r++) 
	    {
             for (j = r + 1; j < m; j++) 
		    {
                 if (b[r] > b[j]) 
				{
                    i = b[r];
                    b[r] = b[j];
                    b[j] = i;
                }
            }
        } 
        printf("Ascending Order:\n");
        for (r = 0; r < m; r++)
                printf("%d\n", b[r]); 
        printf("\nDescending Order:\n");
        for (r = m-1; r >= 0; r--)
        printf("%d\n", b[r]);
}
