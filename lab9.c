#include <stdio.h>
#include <math.h>

int is_perfect_square (int a) {
    double s = sqrt(a);
    if (s == (int) s)
        return 1;
    else
        return 0;
}

int main() {
    printf("Please enter a positive integer: ");
    int c;
    scanf(" %i", &c);

    if (c < 0) {
        printf("This is not a positive integer. ");
        main();
    } else if (c == 0) {
        printf("Have a nice day.");
        return 0;
    }


    if (is_perfect_square(c))
        printf("The last bulb is on.\n");
    else
        printf("The last bulb is off.\n");

    main();
    return 0;
}
