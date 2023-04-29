#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char decode_char(char c) {
    switch (c) {
        case 'W': return 'Q';
        case 'E': return 'W';
        case 'R': return 'E';
        case 'T': return 'R';
        case 'Y': return 'T';
        case 'U': return 'Y';
        case 'I': return 'U';
        case 'O': return 'I';
        case 'P': return 'O';
        case 'S': return 'A';
        case 'D': return 'S';
        case 'F': return 'D';
        case 'G': return 'F';
        case 'H': return 'G';
        case 'J': return 'H';
        case 'K': return 'J';
        case 'L': return 'K';
        case 'X': return 'Z';
        case 'C': return 'X';
        case 'V': return 'C';
        case 'B': return 'V';
        case 'N': return 'B';
        case 'M': return 'N';
        case '/': return '.';
        case '.': return ',';
        case '[': return 'P';
        case ',': return 'M';
        case ' ': return ' ';
        default: return c;
    }
}
int main() {
    char *a, *b;
    int i, len;

    printf("Enter the input string: ");
    a = (char *)malloc(100 * sizeof(char));
    fgets(a, 100, stdin);
    len = strlen(a);

    // dynamically allocate memory for b
    b = (char *)malloc((len + 1) * sizeof(char));

    for(i = 0; i < len; i++)
        b[i] = decode_char(a[i]);

    printf("\n%s", b);

    return 0;
}
