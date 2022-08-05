#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\n\n\n");
    printf("......The table of %d......\n\n", n);
    for(i = 1; i<11; i++)
        printf("%d * %d = %d\n", n, i, n*i);

    return 0;
}
