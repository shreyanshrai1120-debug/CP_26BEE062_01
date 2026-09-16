//take a number n as input and tell if it is prime or not


#include <stdio.h>
int main(){

    int n,d;
    d = 0;

    printf("Enter a number n : ");
    scanf("%d", &n);

    for(int i = 2 ; i < n ; i++){
        if(n % i == 0){ d = 1;

        break;}
    }

    if(d == 0){
        printf("The given number is prime. ");}

    else printf("The given number is composite");

    
}