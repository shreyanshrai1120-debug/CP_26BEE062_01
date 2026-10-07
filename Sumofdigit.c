//WAP to give sum of digits of a given number

#include <stdio.h> 
int main(){

    int a,sum,b,c;

    sum = 0;

    printf("Enter a number : ");
    scanf("%d",&a);

    while(a != 0){



        c = a % 10;


        sum = sum + c;

        a= a/10;


    };
    printf("The sum of the digits is : %d",sum);

}