#include<stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    int a, b;
    while(tc--){
        scanf("%d %d", &a, &b);

        if(a == b){
            printf("0\n");
            continue;
        }

        int count = 0;
        while(a != b){
            if(a > b){
                int to_eat = (a + 1) / 2;  // Eat half of Alice's slices (rounded up)
                count += to_eat;
                a -= to_eat;  // Subtract the eaten slices from Alice's cake
            } else {
                int to_eat = (b + 1) / 2;  // Eat half of Bob's slices (rounded up)
                count += to_eat;
                b -= to_eat;  // Subtract the eaten slices from Bob's cake
            }
        }
        printf("%d\n", count);
    }
}
