// André Lopes dos Santos
// bubble sort com 10 numeros

int main (){
	
int vetor [10] = {9, 5, 7, 2, 9, 4, 1, 3, 0, 10};
int i, j, troca;
int n = 10;

 for (i=0; i<n; i++){
 	printf ("[%d]",vetor[i]);
 }
 
   for (i = 0; i < n; i++) {

        for (j = i+1 ; j < n ; j++) {

            if (vetor[i] > vetor[j]) {
                troca = vetor[i];
                vetor[i]     = vetor[j];
                vetor[j] = troca;
            }
        }
    }
    printf ("\n");
    for (i=0; i<n; i++){
 	printf ("[%d]",vetor[i]);
	}
}
