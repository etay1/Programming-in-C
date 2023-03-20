#include <stdio.h>
#include <stdlib.h>

// Elijah Tay Lab 5

int my_strlen(char s[]) {
    int counter = 0;
    for (int i = 0; s[i] != '\0' ; ++i) {
        counter ++;
    }
    return counter;
}

int my_strcpy(char s[], char t[]) {
    int i;
    int len_s = my_strlen(s);
    int len_t = my_strlen(t);

    if (len_s < len_t)
        return -1;

    for (i = 0; s[i] != '\0'; ++i)
        s[i] = t[i];

    s[i] = '\0';
    return 1;
}

char* my_strcat(char s[], char t[]) {

    int len_s = my_strlen(s), len_t = my_strlen(t),
            total_length = len_s + len_t + 1, i;

    //allocate memory for string
    char new_array[total_length + 1];
    char *new = calloc(total_length, sizeof(char));

    for (i = 0; i < len_s; i++)
        new[i] = s[i];

    for (i = 0; i < len_t; i++)
        new[len_s + i] = t[i];

    new[total_length - 1] = '\0';

    return new;
}

void my_strreverse(char s[]) {
    int len = my_strlen(s), i;
    char *b, *e, ch;

    b = s;
    e = s;

    // point to last char
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
    printf("\nLength of a: %d", my_strlen(a));

    //PSET2
    printf("\nCan be copied: %d", my_strcpy(a, c));
    printf("\nA copy C: %s", a);

    //PSET3
    char s[] = "temp";
    char *q = my_strcat(b, c);
    printf("\nConcat b + c: %s", q);

    //PSET4
    my_strreverse(b);
    printf("\nreverse b: %s\n", b);
}
