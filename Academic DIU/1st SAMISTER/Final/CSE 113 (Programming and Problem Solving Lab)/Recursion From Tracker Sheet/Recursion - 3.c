#include <stdio.h>

void printArrayInZigZag(int A[], int start, int end) {

    if (start >= end) {
        return;
    }

    printf("%d %d\n", A[start], A[end]);

    printArrayInZigZag(A, start + 1, end - 1);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Output:\n");
    printArrayInZigZag(A, 0, n - 1);

    return 0;
}
