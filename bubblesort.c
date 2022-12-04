#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10 // Especificação que o vetor teria 10 posições.
int main() {
	
 setlocale(LC_ALL, "");
 
 int numeros[TAM]; // Especifica as 10 posições.
 int i, aux, contador;
 
 // Linha 13-16, captura os valores digitados pelo usuario e os guarda nas posições.
printf("Entre com dez números para preencher o array, e pressione enter após digitar cada um:\n");
 for (i = 0; i < TAM; i++) {
 scanf("%d", &numeros[i]);
 }

// Linha 19-22, mostra as ordens atuais dos numeros digitados pelo usuario.
printf("Ordem atual dos itens no array:\n");
for (i = 0; i < TAM; i++) {
 printf("%4d", numeros[i]);
}

// Algoritmo que ordena o bubblesort:
 for (contador = 1; contador < TAM; contador++) { // Contador que irá percorrer do primeiro item ate o penultimo item.
   for (i = 0; i < TAM - 1; i++) { // Começa em zero e vai ate ela ser TAM - 1.
     if (numeros[i] > numeros[i + 1]) { // Se o vetor numeros[i] tiver um valor maior que numeros[i + 1], efetua trocas.
       aux = numeros[i];
       numeros[i] = numeros[i + 1];
       numeros[i + 1] = aux;
     }
   }
 }
 // Linha 35-38 mostra os elemntos em ordem crescente.
printf("\nElementos do array em ordem crescente:\n");
for (i = 0; i < TAM; i++) {
 printf("%4d", numeros[i]);
}

printf("\n");
return 0;
}
