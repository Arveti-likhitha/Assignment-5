#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = n; i>=1; i--)
        if(i%2!=0)
            printf("%d\t", i);

    return 0;
}
