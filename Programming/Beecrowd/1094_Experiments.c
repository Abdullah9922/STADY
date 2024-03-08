//https://judge.beecrowd.com/en/problems/view/1094
#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);

    char t;
    int sumC=0,sumR=0,sumS=0,total=0;
    float pC,pR,pS;


    for(int i=1;i<=n;i++){
        scanf("%d %c",&a,&t); // t = type of animal.

        total+=a;
        if(t == 'C')
            sumC+=a;
        else if(t == 'R')
            sumR+=a;
        else if(t == 'S')
            sumS+=a;
    }

    pC=(((double)sumC/total)*100);
    pS=(((double)sumS/total)*100);
    pR=(((double)sumR/total)*100);


    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",sumC);
    printf("Total de ratos: %d\n",sumR);
    printf("Total de sapos: %d\n",sumS);
    printf("Percentual de coelhos: %.2f %\n",pC);
    printf("Percentual de ratos: %.2f %\n",pR);
    printf("Percentual de sapos: %.2f %\n",pS);

}
