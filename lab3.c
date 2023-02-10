#include <stdio.h>
#include <string.h>

int main() {
    char base;
    int value;
    char ob;
    char s[32]; /* n is an array of 20 chars */

    printf("%s","Enter Input Base\nb for binary, d for decimal, h for hexadecimal or o for octal:\n");
    scanf(" %c", &base);

    printf("%s","Enter the value\n");

    switch (base) {
        case 'b':
            scanf("%s", s);
            break;
        case 'd':
            scanf("%d", &value);
            break;
        case 'h':
            scanf("%x", &value);
            break;
        case 'o':
            scanf("%o", &value);
            break;

    }

    printf("Enter the base of the output (d, h or o):\n");
    scanf(" %c", &ob);

    switch (base) {
        int n;
        case 'b':
            n = 0;
            for (int i = 0; i < strlen(s); i++)
	        n = n * 2 + ( s[i]- 48);
            value = n;

            //value = binaryToWhatever(s)
            switch (ob) {
                case 'd':
                    printf("%d",value);
                    break;
                case 'h':
                    printf("%x",value);
                    break;
                case 'o':
                    printf("%o",value);
                    break;
            }
            break;

        case 'd':
            switch (ob) {
                case 'd':
                    printf("%d",value);
                    break;
                case 'h':
                    printf("%x",value);
                    break;
                case 'o':
                    printf("%o",value);
                    break;
            }
            break;

        case 'h':
            switch (ob) {
                case 'd':
                    printf("%d",value);
                    break;
                case 'h':
                    printf("%x",value);
                    break;
                case 'o':
                    printf("%o",value);
                    break;
            }
            break;

        case 'o':
            switch (ob) {
                case 'd':
                    printf("%d",value);
                    break;
                case 'h':
                    printf("%x",value);
                    break;
                case 'o':
                    printf("%o",value);
                    break;

            }

    }

    char z;
    printf("\nDo you wish to do another? (Y):\n(Any other key will end the program)\n");
    scanf(" %c", &z);

    if (z == 'Y' || z == 'y')
        main();

    return 0;
}
