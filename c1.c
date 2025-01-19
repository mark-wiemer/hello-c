// Chapter 1
// Compile with `gcc c1.c -o c1.out`
// Execute with `./c1.out`
// View assembly with `objdump -M intel -S --disassemble c1.out > c1.dump && code c1.dump`
// View current default compiler settings with `gcc -v` and `echo | gcc -dM -E -x c - > out.txt`
#include <stdio.h>

/// Converts US floor number to European floor number
int usFloorToEuFloor() {
    int usf, euf;
    printf("Enter US floor: ");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU floor: %d\n", euf);
}

int main() {
    printf("Hello world\n");
    usFloorToEuFloor();
}