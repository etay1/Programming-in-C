#include <stdio.h>

main()
{

//Declare variables
int int1;
int int2;
int int3;

//Input Integers
printf("Enter three integers\n");
scanf("%i", &int1);
scanf("%i", &int2);
scanf("%i", &int3);
printf("%i\n", (int1 * int2 - int3));

printf("A:\nThis is a C program\n");
printf("B:\nThis is\na C program\n");
printf("C:\nThis\nis\na\nC\nprogram\n");
printf("D:\nThis\tis\ta\tC\tprogram\n");
printf("E:\n*****\n****\n***\n**\n*");

int digits;

scanf("%i", &digits);
int first = digits/10000;
int second = digits;
int third;
int fourth;
int fifth;


return 0;
}
