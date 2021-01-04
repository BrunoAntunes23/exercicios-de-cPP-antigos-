#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float vVC,vCa,vVt;
	int	vMs;
		
		printf("insira o total da conta: \n");
			scanf("%f",&vVC);
			
			printf("insira o total de messes atrasados: \n");
				scanf("%d",&vMs);
				
			switch(vMs)
			{
				case 1:
				 	vCa=(vVC*0.01);	
				 	vVt=(vCa+vVC);
				 	printf("o valor atua da divida é R$%.2f",vVt);
				 break;
					
					case 2:
						vCa=(vVC*0.02);
						vVt=(vCa+vVC);
				 		printf("o valo atual da divida é : R$ %.2f",vVt);
					break;
					
						case 3:
							vCa=(vVC*0.03);
							vVt=(vCa+vVC);	
				 			printf("o valo atual da divida é : R$ %.2f",vVt);	 
						break;
						
							case 4:
								vCa=(vVC*0.04);;
								vVt=(vCa+vVC);	
				 				printf("o valo atual da divida é : R$ %.2f",vVt);
							break;
								
								case 5:
									vCa=(vVC*0.05);	
									vVt=(vCa+vVC);
								 	printf("o valo atual da divida é : R$ %.2f",vVt
									 );
									break; 				
				default:
					printf("***erro***");
				break;
			}
	return 0;
}
