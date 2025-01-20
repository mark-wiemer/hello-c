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
char* reverseString(char string[]) {
    int len = py_len(string);
    char dupe[len];
    // use `i <= len` to include the null terminator
    // suppose len == 10
    // dupe[10] = NULL
    // dupe[9] = string[0]
    for (int i = 0; i < len; i++) {
        dupe[len - i - 1] = string[i];
    }
    dupe[len] = NULL;
    string = dupe;
}

int main() {
    char string[1000];
    printf("Enter a string to reverse: ");
    fgets(string, 1000, stdin);
    printf(reverseString(string));
}
