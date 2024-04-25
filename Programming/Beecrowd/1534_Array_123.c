//https://judge.beecrowd.com/en/problems/view/1534
#include<stdio.h>
int main()
{
    int a;

    while(scanf("%d",&a)!=EOF){
        int arr[a][a];
        int b = 0, c = a - 1;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                if (b == c && j == c)
                    printf("2");
                else if (j == b && b != c)
                    printf("1");
                else if (j == c && b != c)
                    printf("2");
                else
                    printf("3");
            }
            b++, c--;
            printf("\n");
        }
    }
}
