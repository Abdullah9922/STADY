#include<stdio.h>
int main()
{
    int n,i,j,tmp;
    printf("Input the number of elements to store in the array : ");
    scanf("%d",&n);
    printf("\n--------------------------------------------------------\n");


    int a[n];
    printf("Input %d number of elements in the array :\n",n);
    for(int i=0;i<n;i++){
        printf("element - %d : ",i+1);
        scanf("%d",a+i);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(a + i) > *(a + j)) {
                tmp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tmp;
            }
        }
    }



    printf("The elements in the array after sorting :\n");
    for(int i=0;i<n;i++){
        printf("element - %d : %d\n",i+1,*(a+i));
    }

}
