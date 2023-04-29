#include <stdio.h>

struct rt {
    int n;
    int d;
};

void input(struct rt* num) {
    printf("Enter the numerator: ");
    scanf("%d", &num->n);
    printf("Enter the denominator: ");
    scanf("%d", &num->d);
}

void output(struct rt* num) {
    printf("%d/%d\n", num->n, num->d);
}

void add(struct rt* num1, struct rt* num2, struct rt* res) {
    res->n = (num1->n * num2->d) + (num2->n * num1->d);
    res->d = num1->d * num2->d;
}

void multiply(struct rt* num1, struct rt* num2, struct rt* res) {
    res->n = num1->n * num2->n;
    res->d = num1->d * num2->d;
}

int main() {
        struct rt num1, num2, res;
        input(&num1);
        input(&num2);

        int o;
        printf("Enter 1 for add and 2 for multiply: ");
        scanf("%d", &o);
        if (o == 1) {
            add(&num1, &num2, &res);
        } else if (o == 2) {
            multiply(&num1, &num2, &res);
        } else {
            printf("Invalid operation\n");
        }

        printf("The answer is ");
        output(&res);

        printf("Do you want to run the program (n for exit): ");
        char c;
        scanf(" %c", &c);
        if (c == 'n')
            printf("Have a nice day.\n");
        else
            return main();

        return 0;
}
