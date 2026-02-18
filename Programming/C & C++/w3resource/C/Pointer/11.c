#include<stdio.h>

void sort(int *x,int *y,int *z);

int main()
{
    int x,a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("Befor swap: \n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    sort(&a,&b,&c);

    printf("After swap:\n");
    printf("%d\n%d\n%d\n",a,b,c);

}

void sort(int *x, int *y, int *z)
{
    int tmp;
    tmp = *y;
    *y = *x;
    *x = *z;
    *z = tmp;
}
