//	Accept 5 values and print them later on.

#include <stdio.h>

int main(){

    int arr[5];
 
    for(int i = 0; i < 5; i++){

        printf("Enter value %d : ",i+1);
        scanf("%d",&arr[i]);

    }

    printf("The values are :\n");

    for(int i = 0;i < 5; i++){
        printf("%d\n",arr[i]);
    }
}