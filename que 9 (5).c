#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
        printf("%d\t", i*i*i);

    return 0;
}
