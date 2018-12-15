#include <stdio.h>
#include <string.h>

double oblicz(double *p, double *k, double *i, double *sr); 

int main(){
	
	double tab[] = {37.97, 56.18, 85.60, -42.75, 5.62, 27.09, 95.55, 26.45, -63.75, -11.93, -69.80, -98.54, -26.96, -91.09, -26.46, -57.81, 74.34, 66.94, 82.87, 38.31, 85.27, -50.79, 18.04, -33.39, 5.67, -27.31, 41.89, -68.08, 71.23, 45.48, 33.92, 10.20, 2.66, 20.52, 66.45, -90.72, -51.39, 63.00, 34.73, -16.14, -47.92, 63.93, -15.68, 24.11, 71.84, 56.85, 65.30, 47.18, 24.79, 49.17};
	double suma, iloczyn=1, srednia=0;
	
	suma=oblicz(&tab[10],&tab[20],&iloczyn,&srednia);
	
	
	printf("\nSuma = %f, iloczyn = %f, srednia = %f \n",suma, iloczyn, srednia);
		
return 0;
}

double oblicz(double *p, double *k,double *i, double *sr){
	double s=0;
	int a=0;
	
	for(double *j=p; j<(k+1);j++){
		s =+*j;
		* i =*j;
		a++;
	}
	* sr=s/(double)a;
	
	return s;
}
