#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);



    }
}





//#include <stdio.h>
//#include <stdlib.h>
//
//#define MOD 1000000007
//
//void vg() {
//    int n;
//    scanf("%lld", &n);
//
//    long long* arr = (long long*)malloc(n * sizeof(long long));
//    for (int i = 0; i < n; i++) {
//        scanf("%lld", &arr[i]);
//    }
//
//    // Sort the array
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                long long temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//    long long val = 1;
//
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == val) {
//            val++;
//            continue;
//        } else {
//            if (arr[i] > val) {
//                printf("NO\n");
//                free(arr);
//                return;
//            }
//            val++;
//        }
//    }
//    printf("YES\n");
//    free(arr);
//}
//
//int main() {
//    int t;
//    scanf("%d", &t);
//    while (t--) {
//        vg();
//    }
//    return 0;
//}
//
