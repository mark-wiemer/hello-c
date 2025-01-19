// Chapter 1
// Compile with `gcc c1.c -o c1.out`
// Execute with `./c1.out`
// View assembly with `objdump -M intel -S --disassemble c1.out > c1.dump && code c1.dump`
// View current default compiler settings with `gcc -v` and `echo | gcc -dM -E -x c - > out.txt`
#include <stdio.h>

/// Prints the first 100 characters of the user's name
/// - Assumes user input is a single word
int helloUser() {
    char name[100];
    printf("What's your first name? ");
    scanf("%100s", name);
    printf("Hello %s!\n", name);
}

/// Converts US floor number to European floor number.
/// - Assumes user input is a number
int usFloorToEuFloor() {
    int usf, euf;
    printf("Enter US floor: ");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU floor: %d\n", euf);
}

int main() {
    printf("Hello world\n");
    helloUser();
}