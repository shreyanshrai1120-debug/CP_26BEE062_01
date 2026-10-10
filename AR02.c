//	Accept 10 values and print 4th, 7th and 9th value

#include <stdio.h>

int main()
{

    int arr[10];

    for(int i = 0; i < 10;i++){

        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("%d %d %d",arr[3],arr[6],arr[8]);
}