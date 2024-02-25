#include <stdio.h>
#include <string.h>


int main(){
	
	int pippo = 0;
	int x;
	
	printf("%d\n", pippo);
	pippo = valore(pippo);
	printf("%s\n", pippo); //segmentation fault inizia a leggere tutta la memoria fino al /0, stringa piu lunga del buffer
	
	indirizzo(&x);
	printf("%d\n", x);

	return 0;
}

int valore(pippo){
	pippo = 5;
	return pippo;

}

void indirizzo(int*x){

	*x = 10; //assegna valore 10 all'indirizzo di memoria in cui si trova variabile


}

//usare dmesg per vedere indirizzi e errori