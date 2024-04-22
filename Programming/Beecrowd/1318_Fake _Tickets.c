//https://judge.beecrowd.com/en/problems/view/1318
#include<stdio.h>
int main()
{
    int a,b,cont1=0,temp=0;

    while(1){
        scanf("%d %d",&a,&b);

        if(a==0 && b==0)
            break;

        int x[b], xc[b];

        for(int j=0;j<b;j++)
            scanf("%d",&x[j]);

        for(int m=0;m<b;m++)
            xc[m]=x[m];

        for(int k=0;k<b;k++){  // 3 3 3 2 4
            for(int l=0;l<b;l++){

                if(k!=l){
                    if(x[k]==x[l]){
                        cont1++;
                        xc[l]=0;

                        int j;
                        for(int n=j;n<b;n++)
                            if(x[k]==xc[l])
                            xc[n]=0;

                        break;
                    }
                    xc[k]=0;
                }
            }
        }


        printf("%d\n",cont1);
        cont1=0;

    }

}
