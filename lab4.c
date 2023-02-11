#include <stdio.h>
#include <stdlib.h>

int main() {

    int i1, i2;
    double d1, d2;

    printf("1.\tRecord the addresses of the variables.\n");
    printf("%p\n", (void *)&i1);
    printf("%p\n", (void *)&i2);
    printf("%p\n", (void *)&d1);
    printf("%p\n", (void *)&d2);

    printf("\n2.\tDeclare 4 pointer variables (intptr1, intptr2, dubptr1, dubptr2), one for each of the above variables and record the addresses of these variables.\n");
    int * intptr1;
    int * intptr2;
    double * dubptr1;
    double * dubptr2;
    printf("%p\n", (void *)&intptr1);
    printf("%p\n", (void *)&intptr2);
    printf("%p\n", (void *)&dubptr1);
    printf("%p\n", (void *)&dubptr2);

    printf("\n3.\tAssign the address of i1 to intptr1, the address of d1 to dubptr1 and so on. "
           "Record the data values stored in the pointer variables.");

    intptr1=&i1;
    intptr2=&i2;
    dubptr1=&d1;
    dubptr2=&d2;

    printf("\nValue of intptr1 : %d \n",*intptr1);
    printf("Value of intptr2 : %d \n",*intptr2);
    printf("Value of dubptr1 : %f \n",*dubptr1);
    printf("Value of dubptr2 : %f \n",*dubptr2);

    printf("\n4.\tAssign intptr2 to intptr1 and record the value of intptr1. Assign intptr1 to dubptr1 and record what happens. Use typecasting to cast the type of intptr1 to type (double *) and assign this to dubptr1 and record the value in dubptr1.\n");
    intptr1=intptr2;
    dubptr1=(double *)intptr1;
    printf("Value of intptr1: %d \n",*intptr1);
    printf("Value of dubptr1 after typecasting: %f \n",*dubptr1);


    printf("\n5.\tAssign the value NULL to intptr1 and record the value that is output for intptr1.\n");
    intptr1 = NULL;
    printf("Value of intptr1 : %d \n", intptr1);

    printf("\n6.\tDereference the pointer intptr2\n");
    *intptr2=100;
    printf("Value of intptr2 : %d \n",*intptr2);

    //  Try to dereference the pointer intptr1 (which is set to NULL) and see what happens.
    //  If this causes a problem with the program, record the problem and remove the code.
    //  *intptr1=8;
    //  Process finished with exit code 139 (interrupted by signal 11: SIGSEGV)

    printf("\n7.\tAssign the value 100 to * intptr2 and record the value of both i1 and i2.");
    printf("value of *intptr2 : <%d>\n",*intptr2);
    *intptr2 = 100;
    printf("Value of i1 :  %d\n",i1);
    printf("Value of i2 :  %d\n",i2);

    printf("\n8.\tFor intptr2 and dubptr2, record the value of and the dereferenced value of the pointer + 1 and the pointer – 1.\n");
    printf("(intptr2 + 1) : <%p> (dubptr2 + 1) : <%p>\n", (intptr2 + 1), (dubptr2 + 1));
    printf("*(intptr2 + 1) : <%d> *(dubptr2 + 1) : <%lf>\n", *(intptr2 + 1), *(dubptr2 + 1));
    printf("(intptr2 - 1) : <%p> (dubptr2 - 1) : <%p>\n", (intptr2 - 1), (dubptr2 - 1));
    printf("*(intptr2 - 1) : <%d> *(dubptr2 - 1) : <%lf>\n", *(intptr2 - 1), *(dubptr2 - 1));

    printf("\n9.\tSet intptr1 to the address of i1. Record the answers to the following questions:\n");
    intptr1 = &i1;
    printf("( intptr1 == intptr2) : <%d>\n", (intptr1 == intptr2));
    printf("(*intptr1 == *intptr2) : <%d>\n", (*intptr1 == *intptr2));
    intptr1 = &i2;
    printf("(intptr1 == intptr2) : <%d>\n", (intptr1 == intptr2));
    printf("(*intptr1 == *intptr2) : <%d>\n", (*intptr1 == *intptr2));

    printf("\n10.\tThe malloc function assigns new memory to a pointer variable.\n"
           "It returns type void * so you must typecast it to the correct type.\n"
           "Declare a new pointer to type double (ptr) and assign a block of memory to this pointer using malloc (sizeof (double)).\n"
           "Using the pointer, assign the value of 3.1416 to this block of memory. Record the following information:\n");
    double* ptr = (double*)malloc(sizeof (double));
    *ptr = 3.1416;
    printf("Value of ptr : %p \n",ptr);
    printf("Value of *ptr : %lf \n",*ptr);

    printf("\n11.\tTo deallocate the dynamic memory of a pointer, we use the free () function.\n"
           "This function requires us to typecast our pointer to type void *.\n"
           "The syntax is: free ( (void *) ptr); Deallocate the memory for ptr and reallocate it again.\n"
           "Is the value of ptr the same as it was in question 10? No it isn't\n");

    free((void*)ptr);
    ptr = (double*)malloc(sizeof(double));
    printf("Value of ptr post reallocation : %p \n",ptr);

    return 0;
}
