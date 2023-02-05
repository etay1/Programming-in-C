#include <stdio.h>

int main() {
    int a,b,cc=0,ca=0,s=0,r;

    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    //if a = 0 exit
    while(a!=0) {
        r = a + b;
        ca = 0;
        cc = 0;
        while(a!=0&&b!=0) {
            s=0;
            s+= a % 10; // last digit of a += s
            s+= b % 10; // last digit of b += s
            s+=ca;// add carry to the s
            if(s > 9) {// if s greater than 9 means carry
                cc++; // increment the ca
                ca=1; // set ca to 1
            }
            else {// if the sum is less than 10, no carry
                ca=0; //
            }
            a=a/10; // remove last digit frob a
            b=b/10; // remove last digit from b
        }

        if(cc == 0)
            printf("No carries are required");
        else
            printf("\n%d carries required", cc);

        printf("\nThe addition of two numbers is %d", r);
        printf("\nEnter two numbers\n");
        scanf("%d %d",&a,&b);
    }

    return 0;

}
