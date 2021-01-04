#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float vSal,vSaln;
	char vOpc;
	
		printf("insira o salario atual :  \n");
			scanf("%f",&vSal);
			
			printf("insira a opcao do aumento de salario : \n");
				scanf("%s",&vOpc);
				switch(vOpc)
				{
					case'a':
						vSaln=((vSal*0.10)+vSal);
							printf("o novo salario e : \n %.2f",vSaln);
					break;		
						case'A':
						vSaln=((vSal*00.10)+vSal);
							printf("o novo salario e : \n %.2f",vSaln);
						break;
							case'b':
								vSaln=((vSal*00.15)+vSal);
								printf("o novo salario e : \n %.2f",vSaln);
							break;
								case'B':
									vSaln=((vSal*00.15)+vSal);
									printf("o novo salario e : \n %.2f",vSaln);
								break;
								 	case 'C':
								 		vSaln=((vSal*00.20)+vSal);
								 		printf("o novo salario e : \n %.2f",vSaln);
								 	break;	
									
					default:
						printf("erro");
					break;	
				}
	return 0;
}
