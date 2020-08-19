#include <stdio.h>
#include <stdlib.h>

int main(void){
	int dia;

	printf("\n Digite um valor de 1 à 7:\n", &dia);
  scanf("%d", &dia);

  if(dia)

  switch(dia){
    case 1 :
    printf("Domingo\n");
    break;

    case 2 : 
    printf("Segunda\n");
    break;

    case 3 : 
    printf("Terça\n");
    break;

    case 4 :
    printf("Quarta\n");
    break;

    case 5 : 
    printf("Quinta\n");
    break;

    case 6 :
    printf("Sexta\n");
    break;

    case 7 :
    printf("Sábado\n");
    break;
}

return(0);

}