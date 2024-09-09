#include <stdio.h>
#include <ctype.h>

int main(){
    int num;
    int scanfResult;
    char continuar;
do{

  do{
    printf("\nDigite um número para ver sua tabuada: ");
    fflush(stdout);
    scanfResult = scanf("%d", &num);

    while(getchar() != '\n');

    if(scanfResult != 1){
    	printf("\nPor favor, não digite letras, apenas números.\n");
    }else if(num < 0){
    	printf("\nPor favor, digite apenas números positivos.\n");
    }

  }while(scanfResult != 1 || num < 0);

     printf("\nTabuada do %d:\n", num);
     for (int i = 1; i <= 10; ++i){
     printf("%d x %d = %d\n", num, i, num * i);
     }

do{
     printf("\nDeseja ver a tabuada de outro número? (s/n): ");
     fflush(stdout);
     scanf(" %c", &continuar);
     continuar = toupper(continuar);

     while(getchar() != '\n');

     if(continuar != 'S' && continuar != 'N'){
     	 printf("Entrada inválida, digite 's' para continuar e 'n' para sair.\n");
}

}while(continuar != 'S' && continuar != 'N');

}while(continuar == 'S');
	printf("Programa encerrado. Obrigado!\n");

    return 0;
}