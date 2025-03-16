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

int ex_reverseString() {
    char string[1000];
    printf("Enter a string to reverse: ");
    fgets(string, 1000, stdin);
    string[py_len(string) - 1] = 0; // trim newline from fgets
    char* reversed = reverseString(string);
    printf("Reversed: %s\n", reversed);
}

// Experiment to find out what happens when printf's argument string contains \x, where x is some character not listed above.
int ex_1_2() {
    // printf("Hi .\i. there");
}

// Modify the temperature conversion program to print a heading above the table.
int ex_1_3() {
    /* print Fahrenheit-Celsius table
    for f = 0, 20, ..., 300 */
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;

    printf("Fahr Celsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f  %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

// Write a program to print the corresponding Celsius to Fahrenheit table.
int ex_1_4() {
    /* print Celsius-Fahrenheit table
    for c = -20, -10, ..., 150 */
    int lower, upper, step;
    float fahr, celsius;
    lower = -20; /* lower limit of temperature table */
    upper = 40; /* upper limit */
    step = 5; /* step size */
    celsius = lower;

    printf("Celsius  Fahr\n");
    while (celsius <= upper) {
        fahr = (celsius) * (9.0/5.0) + 32.0;
        printf("%7.0f  %4.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

// Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
int ex_1_5() {
    /* print Celsius-Fahrenheit table
    for f = 300, 280, ... 0 */
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = upper;

    printf("Fahr  Celsius\n");
    while (fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f   %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}

// Write a program to count blanks, tabs, and newlines.
// Ctrl+D to send EOF
int ex_1_6() {
    int c, nl;

    nl = 0;
    int nspaces = 0;
    int ntabs = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nspaces;
        else if (c == '\t')
            ++ntabs;
        else if (c == '\n')
            ++nl;
    }
    printf("Spaces: %d\nTabs: %d\nNewlines: %d\n", nspaces, ntabs, nl);
}

int main() {
    ex_1_6();
}
