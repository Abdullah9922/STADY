//https://judge.beecrowd.com/en/problems/view/2752
#include<stdio.h>
int main()
{
    char a[50]="AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n",a);  // <AMO FAZER EXERCICIO NO URI>
    printf("<%30s>\n",a);  // <          AMO FAZER EXERCICIO >
    printf("<%.20s>\n",a);  // <AMO FAZER EXERCICIO >
    printf("<%-20s>\n",a);  // <AMO FAZER EXERCICIO NO URI    >
    printf("<%-30s>\n",a);  // <AMO FAZER EXERCICIO NO URI    >
    printf("<%.30s>\n",a);  // <AMO FAZER EXERCICIO NO URI>
    printf("<%30.20s>\n",a);  // <          AMO FAZER EXERCICIO >
    printf("<%-30.20s>\n",a);  // <AMO FAZER EXERCICIO           >

}



