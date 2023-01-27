#include <iostream>

int main() {
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
printf("E:\n*****\n****\n***\n**\n*\n");



printf("Enter a five digit integer\n");
int digits;
scanf("%i", &digits);

int a = (digits/10000);
int b = (digits/1000%10);
int c = (digits/100%10);
int d = (digits/10%10);
int e = (digits%10);
printf("%3d %3d %3d %3d %3d",a,b,c,d,e);

return 0;
}
