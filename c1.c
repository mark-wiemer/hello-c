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

int main() {
    char x[] = "Hello";
    printf("%s %d\n", x, py_len(x));
}
