#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    for(int i=0;i<tc;i++){
        scanf("%d",&n);

        int attA[n],defA[n],attP[n],defP[n];
        int sumattA=0,sumattP=0,sumdefA=0,sumdefP=0;

        for(int j=0;j<n;j++){
            scanf("%d",&attA[j]);
            sumattA+=attA[j];
        }

        for(int j=0;j<n;j++){
            scanf("%d",&defA[j]);
            sumdefA+=defA[j];
        }

        for(int j=0;j<n;j++){
            scanf("%d",&attP[j]);
            sumattP+=attP[j];
        }

        for(int j=0;j<n;j++){
            scanf("%d",&defP[j]);
            sumdefP+=defP[j];
        }

        if(sumattA>sumattP && sumdefA>sumdefP)
            printf("A\n");
        else if (sumattA<sumattP && sumdefA<sumdefP)
            printf("P\n");
        else
            printf("DRAW\n");

    }
}
