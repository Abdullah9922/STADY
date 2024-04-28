#include <stdio.h>

int a;
void print_sequence(int N) {
    int a=0;
    if (N == 1) {
        printf("%d ",a);  // Base case: print 1 and do not make any more recursive calls.
        print_sequence(N);
    }

}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);  // Read the integer number from user input
    print_sequence(N); // Call the function to print the sequence
    printf("\n");  // Newline for clean output after the sequence
    return 0;
}
