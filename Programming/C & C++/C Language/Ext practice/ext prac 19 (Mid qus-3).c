#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a,b,contH=0,contL=0;
    int p[28]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        for(int j=1;j<=a;j++){
            scanf("%d",&b);
            for(int k=0;k<25;k++){
                if(p[k]==b)
                    contH++;
            }
            contL++;
        }
        printf("%d %d\n",contH,(contL-contH));
        contH=0;
        contL=0;
    }
}
