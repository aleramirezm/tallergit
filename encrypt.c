#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char texto[100], ch;
	int i, numero[100];
		
	printf("Ingresa el mensaje ");
	gets(texto);
	
	for(i=0; texto[i]!='\0'; i++){
		ch=texto[i];
		if(ch>='a' && ch<='z'){
			numero[i]=(ch-10)*13;  //Función matemática. Se resta el caracter arbitrario '10' para convertir c/u de las letras a un valor int
		}else if(ch>='A' && ch<='Z'){
			numero[i]=(ch-10)*13;
		}
		printf("%d ", numero[i]);
	}
	
}