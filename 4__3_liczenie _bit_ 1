#include <stdio.h>

int count1(unsigned int p);

int main(){
	int a=2071;
	int b;
	
	b=count1(a);
	
	printf("Liczba %d ma %d jedynek.\n",a,b);
	
	return 0;
}

int count1(unsigned int p){
	int s=0;
	
	while(p>0){
		if(1==p%2){
			s=s+1;
			}
		p=(p>>1);
		
	}
	
	return s;
}
