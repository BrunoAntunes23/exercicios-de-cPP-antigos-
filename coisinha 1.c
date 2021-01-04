#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main() {
float valor_compra, valor_final, prestacao;
int opcao, qtd_parcelas;
printf("\nInforme o valor da compra: ")
scanf("%f", &valor_compra);
printf("\n1 - Pagamento á vista - 15%% de desconto sobre o valor total da compra.");
printf("\n2 - Pagamento com cheque pre-datado para 30 dias - 10%% de desconto sobre o valor total da compra.");
printf("\n3 - Pagamento parcelado em 3 vezes - 5%% de desconto sobre o valor total da compra.");
printf("\n4 - Pagamento parcelado em 6 vezes - não tem desconto.");
printf("\n5 - Pagamento parcelado em 12 vezes - 8%% de acréscimo sobre o valor total da compra.");
while (opcao < 1 || opcao > 5) {
printf("\nEscolha a opção desejada: ");
scanf("%d", &opcao);
switch (opcao) {
case 1:
valor_final = valor_compra * (1 - 0.15);
qtd_parcelas = 0;
prestacao = 0;
break;
case 2:
valor_final = valor_compra * (1 - 0.1);
qtd_parcelas = 0;
prestacao = 0;
break;
case 3:
valor_final = valor_compra * (1 - 0.5);
qtd_parcelas = 3;
prestacao = valor_final / qtd_parcelas;
break;
case 4:
valor_final = valor_compra;
qtd_parcelas = 6;
prestacao = valor_final / qtd_parcelas;
break;
case 5:
valor_final = valor_compra * (1 + 0.08);
qtd_parcelas = 8;
prestacao = valor_final / qtd_parcelas;
break;
default
printf("\nOpção inválida.");
}
}
printf("\n\nValor final da compra: %f", valor_final);
if (valor_final < valor_compra)
printf("\nDesconto: %f", valor_compra - valor_final);
else {
if (valor_final > valor_compra)
printf("\nJuros: %f", valor_final - valor_compra);
}
if (parcelas > 0)
printf("\n%d parcelas de %f\n", qtd_parcelas, prestacao);
return 0;
}  include <stdio.h>
int main() {
float valor_compra, valor_final, prestacao;
int opcao, qtd_parcelas;
printf("\nInforme o valor da compra: ")
scanf("%f", &valor_compra);
printf("\n1 - Pagamento á vista - 15%% de desconto sobre o valor total da compra.");
printf("\n2 - Pagamento com cheque pre-datado para 30 dias - 10%% de desconto sobre o valor total da compra.");
printf("\n3 - Pagamento parcelado em 3 vezes - 5%% de desconto sobre o valor total da compra.");
printf("\n4 - Pagamento parcelado em 6 vezes - não tem desconto.");
printf("\n5 - Pagamento parcelado em 12 vezes - 8%% de acréscimo sobre o valor total da compra.");
while (opcao < 1 || opcao > 5) {
printf("\nEscolha a opção desejada: ");
scanf("%d", &opcao);
switch (opcao) {
case 1:
valor_final = valor_compra * (1 - 0.15);
qtd_parcelas = 0;
prestacao = 0;
break;
case 2:
valor_final = valor_compra * (1 - 0.1);
qtd_parcelas = 0;
prestacao = 0;
break;
case 3:
valor_final = valor_compra * (1 - 0.5);
qtd_parcelas = 3;
prestacao = valor_final / qtd_parcelas;
break;
case 4:
valor_final = valor_compra;
qtd_parcelas = 6;
prestacao = valor_final / qtd_parcelas;
break;
case 5:
valor_final = valor_compra * (1 + 0.08);
qtd_parcelas = 8;
prestacao = valor_final / qtd_parcelas;
break;
default
printf("\nOpção inválida.");
}
}
printf("\n\nValor final da compra: %f", valor_final);
if (valor_final < valor_compra)
printf("\nDesconto: %f", valor_compra - valor_final);
else {
if (valor_final > valor_compra)
printf("\nJuros: %f", valor_final - valor_compra);
}
if (parcelas > 0)
printf("\n%d parcelas de %f\n", qtd_parcelas, prestacao);
return 0;
} >
#include <math.h>
#include <stdio.h>
int main() {
float valor_compra, valor_final, prestacao;
int opcao, qtd_parcelas;
printf("\nInforme o valor da compra: ")
scanf("%f", &valor_compra);
printf("\n1 - Pagamento á vista - 15%% de desconto sobre o valor total da compra.");
printf("\n2 - Pagamento com cheque pre-datado para 30 dias - 10%% de desconto sobre o valor total da compra.");
printf("\n3 - Pagamento parcelado em 3 vezes - 5%% de desconto sobre o valor total da compra.");
printf("\n4 - Pagamento parcelado em 6 vezes - não tem desconto.");
printf("\n5 - Pagamento parcelado em 12 vezes - 8%% de acréscimo sobre o valor total da compra.");
while (opcao < 1 || opcao > 5) {
printf("\nEscolha a opção desejada: ");
scanf("%d", &opcao);
switch (opcao) {
case 1:
valor_final = valor_compra * (1 - 0.15);
qtd_parcelas = 0;
prestacao = 0;
break;
case 2:
valor_final = valor_compra * (1 - 0.1);
qtd_parcelas = 0;
prestacao = 0;
break;
case 3:
valor_final = valor_compra * (1 - 0.5);
qtd_parcelas = 3;
prestacao = valor_final / qtd_parcelas;
break;
case 4:
valor_final = valor_compra;
qtd_parcelas = 6;
prestacao = valor_final / qtd_parcelas;
break;
case 5:
valor_final = valor_compra * (1 + 0.08);
qtd_parcelas = 8;
prestacao = valor_final / qtd_parcelas;
break;
default
printf("\nOpção inválida.");
}
}
printf("\n\nValor final da compra: %f", valor_final);
if (valor_final < valor_compra)
printf("\nDesconto: %f", valor_compra - valor_final);
else {
if (valor_final > valor_compra)
printf("\nJuros: %f", valor_final - valor_compra);
}
if (parcelas > 0)
printf("\n%d parcelas de %f\n", qtd_parcelas, prestacao);
return 0;
} 
