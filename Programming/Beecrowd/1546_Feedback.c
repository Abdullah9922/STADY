//https://judge.beecrowd.com/en/problems/view/1546

#include<stdio.h>
int main()
{
    int n,n1,n2;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d",&n1);

        for(int i=1;i<=n1;i++){
            scanf("%d",&n2);
            if(n2==1)
                printf("Rolien\n");
            else if(n2==2)
                printf("Naej\n");
            else if(n2==3)
                printf("Elehcim\n");
            else
                printf("Odranoel\n");
        }
    }


}
