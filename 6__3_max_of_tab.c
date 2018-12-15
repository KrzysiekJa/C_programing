#include <stdio.h>
#include <stdlib.h>

int main (void){
	int tab[10];
	
	for(int i=0; i<10; i++){
		*(tab+i)=rand()%101;
		printf("%d, adres: %p \n",*(tab+i), tab+i);
	}
	
	int *max=tab;
	for(int i=0; i<10; i++){
		if(*max<*(tab+i)){
		max=tab+i;
		}
	}
	printf("Najwiekszy element jest rowny %d i znajduje sie pod adresem: %p \n",*max, max);
	
	return 0;
}
