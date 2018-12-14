#include <stdio.h>
#include <stdlib.h>

#define N 20

int main (void){
	int tab[N];
	
	for(int i=0; i<N; i++){
		*(tab+i)=rand()%10;
		printf("%d ",*(tab+i));
	}
	
	printf("\n");
	
	for(int i=0; i<10; i++){
		int d=0;
		for(int j=0; j<N;j++){
			if(*(tab+j)==i){
				d++;
			}
		}
		if(d==1){
			printf("%d wystepuje w tablicy tylko raz.\n",i);
		}
		else{
			printf("%d wystepuje w tablicy %d razy.\n",i,d);
		}
	}
	
	return 0;
}
