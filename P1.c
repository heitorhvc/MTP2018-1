//Heitor Henrique Vasconcelos Carneiro 
//11711EEL024
#include <stdio.h>//incluindo biblioteca
#define m 10000//definindo
int main()//abrindo funcao principal
{
	int estd=0,i=0;//declarando variaveis
	char bin[m];
	printf("Digite o valor a em binario :   ");//pedido para entrada de dados
	getchar();
	gets(bin);
	while(bin[i] != '\0')//laco
	{
		if(bin[i] == '1' || bin[i] == '0')//condicao 
		{
			if(estd == 0)//condicao 
			{
				if(bin[i] == '0')//condicao 
				{
					estd = 0;
				}
				else//condicao 
				estd = 1;
			}
			else//condicao 
			{
				if(estd == 1)//condicao 
				{
					if(bin[i] == '0')//condicao 
					estd = 2;
					else//condicao 
					estd = 0;
				}
				else//condicao 
				if(estd == 2)//condicao 
				{
					if(bin[i] == '0')//condicao 
					estd = 1;
					else//condicao 
					estd = 2;
				}
			}
			i++;//incremento
		}
		else//condicao 
		{
			printf("O numero inserido nao eh valido de acordo com os criterios");//mensgem para usuario
			return 0;//retorno
		}
		
	}
	if(estd == 0)//condicao 
	printf("O valor inserido pelo usuario eh um multiplo de 3 :  %s",bin);//mensagem para usuario
	else //condicao
	printf("O valor inserido pelo usuario nao eh um multiplo de 3 ");
	return 0;//retorno
}
