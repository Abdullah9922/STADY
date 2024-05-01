#include<stdio.h>

void output(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    output(n);

    return 0;
}

void printIncreasing(int num) {
    if (num <= 0)
        return;

    printIncreasing(num - 1);
    printf("%d ", num);
}
void printDecreasing(int num) {
    if (num <= 0)
        return ;

    printf("%d ", num);
    printDecreasing(num - 1);

}


void output(int n)
{
    printIncreasing(n);
    printDecreasing(n-1);

}
