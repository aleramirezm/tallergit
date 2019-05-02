#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 100

int main(){
	int maxDatos=TAMANIO, auxiliar[TAMANIO],i, k;
	int *p=malloc(maxDatos*sizeof *p);
	char letra[TAMANIO];

	printf("Presiona 1 para dejar de introducir datos\n");
	
	
	for(i=0; ; i++){
		scanf("%d", &p[i]);
		if(i==maxDatos-1 && p[i]!=1){
			//reasignación de memoria en caso que exceda el tamaño inicial.
			maxDatos*=2;
			int *temp=NULL;
			temp=realloc(p, maxDatos*sizeof *p);
			
			//verificación de la asignación.
			if(temp==NULL){
				printf("\nError en la asignaci\242n de memoria.\n");
			}else{
				p=temp;
			}
		}
		auxiliar[i]=(p[i]/13)+10;
		if(p[i]==1){
			break;
		}
	}
	for(k=0; auxiliar[k]!=1; k++){
		letra[k]=auxiliar[k];
		printf("%c", letra[k]);
	}
	return 0;
}