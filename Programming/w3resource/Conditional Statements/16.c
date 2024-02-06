#include <stdio.h>  // Include the standard input/output header file.

int main()
{
    char sing_ch;  // Declare a variable to store a single character.

    printf("Input a character: ");  // Prompt user for input.
    scanf('%c', & sing_ch);  // Read and store the character input.

    /* Checks whether it is an alphabet */
    if((sing_ch>='a' && sing_ch<='z') || (sing_ch>='A' && sing_ch<='Z'))
    {
        printf("This is an alphabet.\n");  // Print message for alphabet.
    }
    else if(sing_ch>='0' && sing_ch<='9') /* whether it is digit */
    {
        printf("This is a digit.\n");  // Print message for digit.
    }
    else /* Else special character */
    {
        printf("This is a special character.\n");  // Print message for special character.
    }
}
