//https://judge.beecrowd.com/en/problems/view/1118

#include<stdio.h>

int main()
{
    int x;
    float n1,n2;

    while(1){
        scanf("%f",&n1);

        if(n1>=1 && n1<=10){
            scanf("%f",&n2);
            if(n2>=1 && n2<=10)
                printf("media = %.2f\n",(n1+n2)/2);

            else{
                printf("nota invalida\n");
                continue;
            }
        }
        else{
            printf("nota invalida\n");
            continue;
        }

        scanf("%d",&x);
        while(1){
        if(x == 2) return 0;
        else if (x == 1) break;
        else scanf("%d",&x);
        }

    }
}
