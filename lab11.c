#include <stdio.h>
#include <ctype.h>

int main() {
    char a[80];
    char c;
    int w = 0, d = 0, l = 0, u = 0, i = 0;

    printf("Enter any input from the keyboard. To end input z:\n");

    while ((c = getchar()) != 'z') {
        if (isspace(c) || c == "\n") {
            w++;
        } else if (isdigit(c)) {
            d++;
        } else if (islower(c)) {
            l++;
            c = toupper(c);
        } else if (isupper(c)) {
            u++;
            c = tolower(c);
        }
        a[i] = c;
        i++;
    }
    a[i] = '\0';

    printf("Output:\n%s\n", a);
    printf("The number of whitespace characters is: %d\n", w);
    printf("The number of digits is: %d\n", d);
    printf("The number of lowercase characters is: %d\n", l);
    printf("The number of uppercase characters is: %d\n", u);
    printf("Goodbye\n");

    return 0;
}
