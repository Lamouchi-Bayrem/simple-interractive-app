#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int num1, num2;

    if (argc >= 3) {
        // Convert arguments to integers
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
    } else {
        // Ask for missing input
        printf("Enter first number: ");
        scanf("%d", &num1);
        
        printf("Enter second number: ");
        scanf("%d", &num2);
    }

    printf("Sum: %d\n", num1 + num2);
    return 0;
}
