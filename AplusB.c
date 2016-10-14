#include <stdio.h>

int main(){
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	if (a<0||a>9||b<0||b>9){
	printf("Input does not meet constrains!\n");
	return(-1);
	}	
	else{
	sum = a + b;
	printf("%d", sum);
	return(0);
	}
}
