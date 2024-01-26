#include<stdio.h>
int main()
{
    int roll = 21;
    float payment = 51999.99;
    double deo = 5999.9494948;
    char section = 'A';

    printf("Enter your roll:- ");
    scanf("%d",&roll);

    printf("Enter your salary:- ");
    scanf("%f",&payment);

    printf("Enter your deo:- ");
    scanf("%lf",&deo);

    printf("Enter your section:- ");
    scanf("%c",&section);


    printf("ROLL:- %d\n", roll);
    printf("SALARY:- %f\n", payment);
    printf("DEO:- %lf\n", deo);
    printf("SECTION:- %c\n", section);

    return 0;

}
