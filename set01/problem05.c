#include <stdio.h>
 
int main()
{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("largest number is %d", a);
    if (b > a && b > c)
        printf("largest number is %d", b);
    if (c > a && c > b)
        printf("largest number is %d", c);
    return 0;
}