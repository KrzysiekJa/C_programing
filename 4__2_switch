#include <stdio.h>

float dod(float a, float b);
float odej(float a, float b);
float mno(float a, float b);
float dzie(float a, float b);

int main(){
	float a;
	float b;
	char o;
	float w;
	
	printf("Podaj pierwsza liczbe:");
	scanf("%f",&a);
	printf("Podaj druga liczbe:");
	scanf("%f",&b);
	printf("Podaj operacje (operator):");
	scanf("%c",&o);
	scanf("%c",&o);
	
	switch(o){
		case '+' : 
				w=dod(a,b);
				printf("Wynik operacji: %10.4f.",w);
				break;
		case '-' : 
				w=odej(a,b);
				printf("Wynik operacji: %10.4f.",w);
				break;
		case '*' : 
				w=mno(a,b);
				printf("Wynik operacji: %10.4f.",w);
				break;
		case '/' : 
				w=dzie(a,b);
				printf("Wynik operacji: %10.4f.",w);
				break;
	}
	
return 0;
} 

float dod(float a, float b){
	float g;
	g=a+b;
	return g;
}

float odej(float a, float b){
	float g;
	g=a-b;
	return g;
}

float mno(float a, float b){
	float g;
	g=a*b;
	return g;
}

float dzie(float a, float b){
	float g;
	g=a/b;
	return g;
}
