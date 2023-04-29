#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    FILE *in = fopen("C:\\Users\\etays\\Desktop\\Programming in C\\Lab10\\f2.txt", "r");
    if (in == NULL) {
        printf("Error opening in file.\n");
        return 1;
    }
    FILE *out = fopen("C:\\Users\\etays\\Desktop\\Programming in C\\Lab10\\f1.txt", "w");
    if (out == NULL) {
        printf("Error opening out file.\n");
        fclose(in);
        return 1;
    }

    int s = 0;
    char ln[100];
    while (fgets(ln, 100, in)) {
        printf("Input line: %s", ln);

        int i = 0;
        while (isdigit(ln[i])) {
            i++;
        }

        if (i > 0) {
            int n = atoi(ln);
            s += n;
            fprintf(out, "%s", ln + i);
        }
        else {
            fprintf(out, "%s", ln);
        }

    }
    fprintf(out, "\n%d", s);

    fclose(in);
    fclose(out);

    printf("\nSum: %d\n", s);
    printf("The file f1.txt has been overwritten with the decoding of f2.txt");

    return 0;
}

//Sample Run:
//Input line: 35Foster001
//Input line: 1256Smith
//Input line: 274Rogers3
//Sum: 1565
//The file f1.txt has been overwritten with the decoding of f2.txt
//        Process finished with exit code 0
//
//
//f1.txt:
//Foster001
//Smith
//Rogers3
//1565
