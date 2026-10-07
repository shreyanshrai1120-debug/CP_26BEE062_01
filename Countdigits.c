//WAP to count digits of a given number

#include <stdio.h>

int main() {

    int a,count;
    count = 0;

    printf("Enter a number : ");
    scanf("%d",&a);

    while(a != 0){

        a = a/10;

        count++;

    }

    printf("The number of digits in the number is %d", count);


}