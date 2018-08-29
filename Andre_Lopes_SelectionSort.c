#include <stdio.h>

int main (){
	
	int vetor [10] = {26, 32, 46, 19, 15, 67, 81, 22, 55, 01};
	int i, j, min;
	
	for (i=0; i<10; i++){
 	printf ("[%d]",vetor[i]);
 
 	}
	printf ("\n");
	for (i = 0; i < 10; i++) {
	min = i;
		for (j = i+1 ; j < 10 ; j++) {
			
			if (vetor [j]< vetor[min]){
				min = j;
			}	
        }
            if (vetor[i] != vetor[min]) {
            int valor =  vetor[i]; 
            vetor[i] = vetor[min];
            vetor[min] = valor;
		}
	}
for (i=0; i<10; i++){
	printf ("[%d]", vetor [i]);
	}
}
