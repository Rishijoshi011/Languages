// Suppose we have 5 num digit for ex.54837
//     Task is addition suppose sum = 0
//     sum(0) = 0 + 7; 0 = 7; sum = 7
//     7 = 7 + 3; 7 = 10; sum = 10
//     10 = 10 + 8 = 18; sum = 18;

#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 10564, sum = 0, ans = 0;
    // scanf("%d", &n);
    while (n > 0)
    {
        sum = n % 10; // 0 = 10564 % 10; 4 = 1056; // 1056 = % 10; 6 = 105;
        ans = ans + sum; // 0 = 0 * 10 + 4 = 4; // 4 = 4 * 10 + 6 = 46;
        n = n / 10; // 10564 = 10564 / 10 = 1056; // 1056 = 105; 

    }
    printf("%d", ans);
    return 0;
}