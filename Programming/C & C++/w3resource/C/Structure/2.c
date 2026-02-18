#include<stdio.h>

struct time
{
    int hours,minutes,seconds;
}time1,time2;


int main()
{
    printf("Input First time:\n");

    printf("Hours: ");
    scanf("%d",&time1.hours);

    printf("Minutes: ");
    scanf("%d",&time1.minutes);

    printf("Seconds: ");
    scanf("%d",&time1.seconds);



    printf("Input Second time:\n");

    printf("Hours: ");
    scanf("%d",&time2.hours);

    printf("Minutes: ");
    scanf("%d",&time2.minutes);

    printf("Seconds: ");
    scanf("%d",&time2.seconds);


    float a=(time1.seconds/3600)+(time1.minutes/60)+time1.hours;
    float b=(time2.seconds/3600)+(time2.minutes/60)+time2.hours;
    float t=a+b;
    //    int t1=t/60;
    //    t=t-(t1*60);
    //    printf("\nHours: %d, Minutes: %d",t1,t);

    printf("Hours:%.2f",t);


}

