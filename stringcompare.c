#include <stdio.h>
#include <string.h>


int main(){

	int z;
	const char x[100] = "ciao";
	char y[100];
	scanf("%s", &y);
	
	printf("%s\n", x);
	printf("%s\n", y);

	z = strcmp(x,y);

	printf("%d\n",z);
	
	if (z == 0){
		printf("daye1");
	}else{
		printf("daye2");

	}

	return 0;
}