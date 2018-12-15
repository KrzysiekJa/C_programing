#include <stdio.h>
#include <string.h> 

char *kopiuj(char *cel, char *napis);

int main(int arg, char * argv[]){
	char tab[100], *w;
	
	printf("Podano %d parametry wywolania programu: \n",arg);
	
	for(int i=0; i < arg; i++){
		printf("argv[%d] = %s\n",i,argv[i]);
	}
	
	if(arg>1){
		w=kopiuj(tab,argv[1]);
	
		printf("\nZawartosc tablicy tab:%s\n",tab);
		printf("Od 'n': %s\n",w);
	}
	else{
		printf("\nZbyt malo parametrow wywolania programu. \n");
	}

return 0;
}

char *kopiuj(char *cel, char *napis){
	strcpy(cel,napis);
	return strchr(cel,'n');
}
