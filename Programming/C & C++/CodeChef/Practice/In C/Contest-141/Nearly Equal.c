#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int m,n;
    while(tc--){
        scanf("%d %d",&m,&n);

        char a[m];
        char b[n];

        //gets(a);
        //gets(b);

        scanf("%s",&a[m]);
        scanf("%s",&b[n]);


        int temp=999999;
        int cont=0;
        for(int i=0;i<=m-n;i++){
            int k=i;
            for(int j=0;j<=n-1;j++){

                if(a[k]!=b[j]){
                    cont++;
                    k++;
                }
            }

            if(cont<temp)
                temp=cont;
        }

        printf("%d\n",temp);

    }
}
