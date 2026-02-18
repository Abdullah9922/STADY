//https://judge.beecrowd.com/en/problems/view/2766
#include<stdio.h>
int main()
{
    int i;
    char a[100];
    for (i=1;i<=10;++i){
        scanf("%s",&a);

        if(i==3)
            printf("%s\n",a);

        if(i==7)
            printf("%s\n",a);

        if(i==9)
            printf("%s\n",a);
    }
}
