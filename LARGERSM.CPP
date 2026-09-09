#include<stdio.h>  //header file
	//Find out largest of two numbers
int main(){
float a,b;

printf("Enter two numbers: ");
scanf("%f %f", &a,&b);

if(a>b){
	printf("%f is larger than %f",a,b);

	}
	else if(b>a){
	printf("%f is larger than %f",a,b);  }

	else printf("%f is equal to %f",a,b);
	return 0;

	}



