// Chapter 1
// https://youtu.be/PaPN51Mm5qQ?si=Hl_IKVrjAP863Tj3&t=6378
#include <stdio.h>

int py_len(char self[])
{
    int i;
    for (i = 0; self[i]; i++);
    return i;
}

// https://youtu.be/PaPN51Mm5qQ?si=DzbcMMOjOCbJ4XF4&t=7106
// Assignment: Reverse a string
// Constraint: in-place!
char* reverseString(char string[]) {
    int len = py_len(string);
    if (len <= 1) return string;
    int isOdd = len % 2;

    // Even: suppose len == 6
    // then len/2 = 3
    // swap 0 with 5, 1 with 4, 2 with 3
    // Odd: suppose len == 5
    // then len/2 = 2
    // swap 0 with 4, 1 with 3
    for (int i = 0; i < len/2; i++) {
        char tmp = string[i];
        int swapIndex = len - i - 1;
        string[i] = string[swapIndex];
        string[swapIndex] = tmp;
    }
    return string;
}

int main() {
    char string[1000];
    printf("Enter a string to reverse: ");
    fgets(string, 1000, stdin);
    char* reversed = reverseString(string);
    printf("Reversed: %s\n", reversed);
}
