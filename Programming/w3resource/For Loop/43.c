#include<stdio.h>
int main()
{
    int i, n1, n2, a, hcf=1;

    printf("\n\n  HCF of two numbers:\n ");
    printf("----------------------\n");

    printf("Input 1st number for HCF: ");
    scanf("%d", &n1);
    printf("Input 2nd number for HCF: ");
    scanf("%d", &n2);

    a = (n1<n2) ? n1 : n2;

    for(i=1; i<=a; i++){
        if ( n1 % i == 0 && n2 % i == 0)
            hcf=i;
    }


    printf("\nHCF of %d and %d is : %d\n\n", n1, n2, hcf);
}
