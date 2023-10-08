
#include <dos.h>
int main()
{
   int a;

   for (a = 200; a <= 1000; a = a + 20)
   {
      sound(a);
      delay(25);
   }

   nosound();

   return 0;
}
