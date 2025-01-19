// Chapter 0
// Compile with `gcc c0.c -o c0.out`
// Execute with `./c0.out`
// View assembly with `objdump -M intel -S --disassemble c0.out > c0.dump && code c0.dump`
// View current default compiler settings with `gcc -v` and `echo | gcc -dM -E -x c - > out.txt`
#include <stdio.h>

/// Converts US floor number to European floor number.
/// - Assumes user input is a number
int usFloorToEuFloor() {
    int usf, euf;
    printf("Enter US floor: ");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU floor: %d\n", euf);
}

/// Prints the first 100 characters of the user's name
/// - Assumes user input is a single word
int helloUser() {
    char name[100];
    printf("What's your first name? ");
    scanf("%100s", name);
    printf("Hello %s!\n", name);
}



/// Repeats the first 1000 chars of a line of text that the user inputs.
int repeatLine() {
    char line[1000];
    printf("Enter a line of text: ");
    fgets(line, 1000, stdin); // others are stdout, stderr :)
    printf("Your input: %s", line);
}

/// Prints the contents of a text file.
/// For best results, the file should end with a blank line.
int readFile() {
    char line[1000];
    FILE *hand;
    hand = fopen("romeo.txt", "r");
    while (fgets(line, 1000, hand) != NULL)
    {
        printf("%s", line);
    }
    
}

int countedLoop() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
}

/// Prints the max and min of the input list of numbers.
/// Use `Ctrl+D` to send the EOF signal to this func
int findMaxAndMin() {
    int first = 1;
    int max, min, num;
    while (scanf("%d", &num) != EOF) {
        if (first || num > max) max = num;
        if (first || num < min) min = num;
        first = 0;
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}

int guessingGame() {
    int magicNumber = 42; // we'll learn about randomness later
    int guess;
    printf("Try to guess the number I'm thinking of!\n");
    while (scanf("%d", &guess) != EOF) {
        if (guess == magicNumber) {
            printf("Nice work!\n");
            break;
        }
        else if (guess < magicNumber) {
            printf("Too low - guess again\n");
        }
        else {
            printf("Too high - guess again\n");
        }
    }
}

int myMultOuter() {
    int myMultInner();
    int result;
    result = myMultInner(6, 7);
    printf("Answer: %d\n", result);
}

int myMultInner(a, b)
    int a,b;
{
    int c = a * b;
    return c;
}

int main() {
    printf("Hello world\n");
    myMultOuter();
}