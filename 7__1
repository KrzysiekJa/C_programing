#include <stdio.h>

#define N 5

// procedurlny STOS


short pusty(const int n);
short pelny(const int n);
void wypisz(const char * S, const int n);
void dodaj(char * S, int * n, char x);
char usun(char * S, int * n);


int main(void){
	char stos[N], x;
	int next = 0, i;

	wypisz(stos, next);

	dodaj(stos, &next, 'A');
	dodaj(stos, &next, 'B');
	dodaj(stos, &next, 'C');
	dodaj(stos, &next, 'D');
	dodaj(stos, &next, 'E');

	wypisz(stos, next);
	printf("\n");

	dodaj(stos, &next, 'F');
	printf("\n");

	wypisz(stos, next);

	x = usun(stos, &next);
	if(x != '\0') 
		printf("\tUsunieto znak %c\n", x);

	wypisz(stos, next);
	
	printf("\n");
	for(i=0; i<N; ++i){
		x = usun(stos, &next);
		if(x != '\0') 
			printf("\tUsunieto znak %c\n", x);
	}

	wypisz(stos, next);

	return 0;
}



short pusty( const int n){
		if(n==0){return 1;}
		else{return 0;}
}

void dodaj(char *S, int *n,char x){
	if(pelny(*n)){
		printf("\nStos jest pełny! Nie udalo sie dodac kolejnego elementu o wartosci '%c'\n",x);
	}
	else{
		*(S+*n)=x;
		(*n)++;
	}
}

short pelny(const int n){
	if(n==N){return 1;}
	else{return 0;}
}

void wypisz(const char * S, const int n){
	if(n==0){
		printf("\n(STOS JEST PUSTY)\n");
	}
	else{
		for(int i=0; i<n;i++){
		printf("%c ",S[i]);
		}
	}
}

char usun(char * S, int * n){
	if(*n==0){
		printf("\nStos jest pusty! Nie udalo sie usunac elementu.\n");
		return '\0';
	}
	else{
		(*n)--;
		return S[*n];
	}
}
