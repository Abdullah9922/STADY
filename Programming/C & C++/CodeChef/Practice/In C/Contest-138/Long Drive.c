#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int x,y;
    while(tc--){
        scanf("%d %d",&x,&y);

        int z=x*10;

        int minitime=((10*y-z)/(100-y));

        if(minitime<1) printf("1\n");
        else printf("%d\n",minitime);
    }
}




//#include <stdio.h>
//
//int main() {
//    int tc;
//    scanf("%d", &tc);
//
//    while (tc--) {
//        int x, y;
//        scanf("%d %d", &x, &y);
//
//        // Initial distance covered in 10 hours
//        int initialDistance = x * 10;
//
//        // Calculate minimum additional hours needed
//        int additionalHours = 0;
//        while (1) {
//            int totalHours = 10 + additionalHours;
//            int totalDistance = initialDistance + additionalHours * 100;
//            double averageSpeed = (double)totalDistance / totalHours;
//
//            if (averageSpeed >= y) {
//                break;
//            }
//            additionalHours++;
//        }
//
//        printf("%d\n", additionalHours);
//    }
//
//    return 0;
//}
//
