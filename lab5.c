// Elijah Tay Lab 5
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char s[]) {
    int c = 0;
    for (int i = 0; s[i] != '\0' ; i++)
        c++;
    return c;
}

int my_strcpy (char s[],char t[]) {
    int a = my_strlen(s);
    int b = my_strlen(t);
    int i = 0;

    if(a < b)
        return -1;

    for(i = 0; i < b; i++)
        s[i] = t[i];

    s[i] = '\0';
    return 1;
}

char* my_strcat(char s[], char t[]) {
    int ls = my_strlen(s);
    int lt = my_strlen(t);
    int tl = ls + lt + 1, i;

    //allocate memory for string
    char new_array[tl + 1];
    char *new = calloc(tl, sizeof(char));

    for (i = 0; i < ls; i++)
        new[i] = s[i];

    for (i = 0; i < lt; i++)
        new[ls + i] = t[i];

    new[tl - 1] = '\0';

    return new;
}

void my_strreverse(char s[]) {
    int len = my_strlen(s), i;
    char *b, *e, ch;

    b = s;
    e = s;

    for (i = 0; i < len - 1; i++)
        e++;

    for (i = 0; i < len/2; i++) {
        ch = *e;
        *e = *b;
        *b = ch;

        b++;
        e--;
    }

}
int main() {
    char a[] = "Billy\0";
    char b[] = "Bob\0";
    char c[] = "John\0";
    printf("\na: %s\nb: %s\nc: %s\n", a, b, c);

    //PSET1
    printf("\nLength of a = %d", my_strlen(a));

    //PSET2
    printf("\nCan be copied: %d", my_strcpy(a, c));
    printf("\nCopy string c into a\n a: %s", a);
    //PSET2 fail
    printf("\nFail test for Can be copied c into b: %d", my_strcpy(b, c));

    //PSET3
    char *q = my_strcat(b, c);
    printf("\nConcat b + c = %s", q);

    //PSET4
    my_strreverse(b);
    printf("\nReverse b = %s\n", b);
    return 0;
}
