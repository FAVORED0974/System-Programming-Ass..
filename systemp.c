#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    // Corrected the format specifier for printing the program name
    printf("\nProgram name: %s", argv[0]);

    if (argc < 2) {
        printf("\n\nNo argument passed through command line!");
    } else {
        printf("\nArgument(s) supplied: ");
        for (i = 1; i < argc; i++) {
            printf("%s\t", argv[i]);
        }
    }

    printf("\n");  // Add a newline for better output formatting
    return 0;  // Return 0 to indicate successful completion
}