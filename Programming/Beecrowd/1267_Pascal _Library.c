//https://judge.beecrowd.com/en/problems/view/1267
#include<stdio.h>
int main()
{
    int a,b,cont,A=0;

    do{
        scanf("%d %d",&a,&b);

        int arr[b][a];

        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++)
                scanf("%d",&arr[i][j]);
        }

        for(int i=0;i<b;i++){
            cont=0;
            for(int j=0;j<a;j++){
                if(arr[i][j])
                    cont++;
            }
        }

        if(cont == a)
            A=1;

        if(A)
            printf("yes\n");
        else
            printf("no\n");

    }
    while(a!=0 && b!=0);

}
