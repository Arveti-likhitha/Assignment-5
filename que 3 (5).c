#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = n; i>0; i--)
        printf("%d\t", i);

    return 0;
}
