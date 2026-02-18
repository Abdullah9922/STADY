//https://judge.beecrowd.com/en/problems/view/2310

#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    char s[100];
    int s1,b1,a1,s2,b2,a2;
    float p,q,r;
    int x=0,y=0,z=0,a=0,b=0,c=0;

    while(tc--){
        scanf("%s",s);
        scanf("%d %d %d",&s1,&b1,&a1);
        scanf("%d %d %d",&s2,&b2,&a2);

        x+=s1;
        y+=b1;
        z+=a1;

        a+=s2;
        b+=b2;
        c+=a2;
    }

    p=(a*100)/(float)x;
    q=(b*100)/(float)y;
    r=(c*100)/(float)z;

    printf("Pontos de Saque: %.2f %%.\nPontos de Bloqueio: %.2f %%.\nPontos de Ataque: %.2f %%.\n", p, q, r);
}
