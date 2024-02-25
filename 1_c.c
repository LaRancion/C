#include <stdio.h>


int main(){
	
	int pippo = 0;
	int pluto = 0;
	char ASCII = 'B';

	printf("Hello World\n");

	char x[]="HelloWorld\n";
	printf("%s",x);

	char y[]="Hello\0World";
	printf("%s,%d,%d\n",y,pippo,pluto);

	scanf("%d", &pippo);
	printf("numero inserito = %d\n", pippo);

	printf("valore ASCII %d\n", ASCII);
	printf("dimensione intero %zu", sizeof(int));

	return 0;


}