//https://judge.beecrowd.com/en/problems/view/2060
#include<stdio.h>
int main()
{
    int n,a;
    int c2=0,c3=0,c4=0,c5=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a%2==0)
            c2++;
        if(a%3==0)
            c3++;
        if(a%4==0)
            c4++;
        if(a%5==0)
            c5++;
    }

    printf("%d Multiplo(s) de 2\n",c2);
    printf("%d Multiplo(s) de 3\n",c3);
    printf("%d Multiplo(s) de 4\n",c4);
    printf("%d Multiplo(s) de 5\n",c5);

}
