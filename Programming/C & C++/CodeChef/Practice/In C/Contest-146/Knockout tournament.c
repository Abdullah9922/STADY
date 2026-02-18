#include<stdio.h>


//int findMax(int arr[], int n) {
//    int max = arr[0]; // Assume the first element is the maximum
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > max) {
//            max = arr[i]; // Update max if current element is greater
//        }
//    }
//    return max;
//}
//
//
//int findMin(int arr[], int n) {
//    int min = arr[0]; // Assume the first element is the minimum
//    for (int i = 1; i < n; i++) {
//        if (arr[i] < min) {
//            min = arr[i]; // Update min if current element is smaller
//        }
//    }
//    return min;
//}


int main()
{
    int tc;
    scanf("%d",&tc);

    int s[16];
    while(tc--){
        for(int i=0;i<16;i++)
            scanf("%d",&s[i]);

        //int max, min;
        //max=findMax(s,16);
        //min=findMin(s,16);

        int arr[16]={0};
        for(int i=0;i<16;i+2){
            if(s[i]>s[i+1])
                arr[i]++;

            else
                arr[i+1]++;
        }
        for(int i=0;i<16;i++)
            printf("%d  ",arr[i]);

        int s2[8];
        int count=0;
        for(int i=0;i<16;i++){
            if(arr[i]!=0){
                s2[count]=s[i];
                count++;
            }
        }

        for(int i=0;i<8;i+2){
            if(s2[i]>s2[i+1])
                arr[i]++;

            else
                arr[i+1]++;
        }

        int s3[4];
        int count2=0;
        for(int i=0;i<8;i++){
            if(arr[i]==2){
                s3[count2]=s2[i];
                count2++;
            }
        }

        for(int i=0;i<4;i+2){
            if(s3[i]>s3[i+1])
                arr[i]++;

            else
                arr[i+1]++;
        }

        int s4[2];
        int count3=0;
        for(int i=0;i<4;i++){
            if(arr[i]==3){
                s4[count3]=s3[i];
                count3++;
            }
        }
        for(int i=0;i<2;i++){
            if(s4[i]>s4[i+1])
                arr[i]++;

            else
                arr[i+1]++;
        }

        for(int i=0;i<16;i++)
            printf("%d ",arr[i]);

    }
}
