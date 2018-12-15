#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void losuj(char *t, int n);
void pisz(char *t);
int licz(char *t, int n);

int main (void){
	char tab[] = "000000";
	char *t=tab;
	
	losuj(t,6);
	pisz(t);
		
	printf("\n Suma = %d\n",licz(t,6));
		
	return 0;
}

void losuj(char *t, int n){
	
	for(int i=0; i<n; i++){
		*(t+i)=rand()%8+'0';
	}
}

void pisz(char *t){
	
	printf("Wylosowano: ");
	printf("%s",t);

}

int licz(char *t, int n)
{
	int suma=0, wyk=n-1;
	for(char *i = t; i<t+n; ++i, --wyk)
		suma += (*i-'0')*pow(8, wyk);
	return suma;
}
