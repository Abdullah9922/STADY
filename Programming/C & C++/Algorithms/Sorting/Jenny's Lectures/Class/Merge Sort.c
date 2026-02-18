#include<stdio.h>

void merge(int A[], int n1, int index1, int B[], int n2, int index2, int C[], int index)
{
    while(n1 && n2){
        if(A[index1] < B[index2]){
            C[index] = A[index1];
            index++;
            index1++;
            n1--;
        }
        else{
            C[index] = B[index2];
            index++;
            index2++;
            n2--;
        }
    }

    while(n1){
        C[index] = A[index1];
        index++;
        index1++;
        n1--;
    }

    while(n2){
        C[index] = B[index2];
        index++;
        index2++;
        n2--;
    }
}


void merge_pass(int A[], int N, int L, int B[])
{
    int j,LB;
    int Q,S,R;

    Q = N/(2*L);      // Q = pair of sub array
    S = 2*L*Q;       // S = pair element
    R = N-S;        // R = not in the pair

    for(j=0; j<Q; j++){
        LB = (2*j)*L;
        merge(A,L,LB,A,L,LB+L,B,LB); // L = number in element in sub array
    }

    if(R<=L){
        for(j=0; j<R; j++)
            B[S+j] = A[S+j];
    }
    else
        merge(A,L,S,A,R-L,S+L,B,S);
}


void merge_sort(int arr[], int n)
{
    int L=1;
    int B[n];

    while(L<n){
        merge_pass(arr, n, L ,B);
        merge_pass(B, n, 2*L, arr);
        L = 4*L;
    }
}


int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Input element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    merge_sort(arr,n);

    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);
}
