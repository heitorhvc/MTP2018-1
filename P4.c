//Heitor Henrique Vasconcelos Carneiro 
//11711EEL024
#include <stdio.h>
int decimal1;//declaracao de variaveis 
int decimal2;//declaracao de variaveis 
int binario1[32];//declaracao de variaveis 
int binario2[32];//declaracao de variaveis 
int resultado[32];//declaracao de variaveis 
int nb;//declaracao de variaveis 
int *vet;//declaracao de variaveis 
int aux;//declaracao de variaveis 

void dec2bin1(int decimal)//funcao
{
	aux=decimal;
	for(nb = 0; decimal >= (1 << nb); nb++);//laco percorrendo dados
	for(;nb!=0;nb--)//laco executando conversao 
	{
		binario1[nb]=decimal%2;
		if(binario1[nb]==1)
			decimal = decimal/2;
	}
}
void dec2bin2(int decimal2)//funcao
{
	scanf("%d", &decimal2);//analize de dados
	getchar();
	aux=decimal2;
	for(nb = 0; decimal2 >= (1 << nb); nb++);//laco percorrendo dados
	for(;nb!=0;nb--)//laco executando conversao
	{
		binario2[nb]=decimal2%2;
		decimal2 = decimal2/2;
	}
}

void NOT()//funcao
{
	int i = 0;//variaveis
	for(i = 0; i < 32; i++)//laco para conversao
	{
		if(binario1[i] == 1)
			binario1[i]= 0;
		else
			binario1[i] = 1;
	}	
}

void AND()//funcao
{
	int i = 0;//variaveis
	for(i = 0; i < 32; i++)//laço para conversao
	{
		if(binario1[i] == 1 && binario2[i] == 1)
			resultado[i] = 1;
		else 
			resultado[i] = 0;
	}
}

void OR()//funcao
{
	int i = 0;//variaveis
	for(i = 0; i < 32; i++)//laco para conversao
	{
		if(binario1[i] == 0 && binario2[i] == 0)
			resultado[i] = 0;
		else 
			resultado[i] = 1;
	}	
}

void XOR()//funcao
{
	int i = 0;//variaveis
	for(i = 0; i < 32; i++)//laco para conversao 
	{
		if(binario1[i] == binario2[i])
			resultado[i] = 0;
		else 
			resultado[i] = 1;
	}	
}

void RT()
{
	int i = 0, j = 0,arrastar;//variaveis 
	printf("Insira o Valor Desejado para Arrastar");//pede entrada de dados
	scanf("%d",&arrastar);//analize de dados
	for(i = 0; i < arrastar; i++)//laco para percorrer dados inseridos 
		resultado[i] = 0;
	for(i = arrastar; i < 32; i++)//laco para conversao
	{
		resultado[i] = binario1[j];
		j++;
	}	
}

void LT()//funcao
{
	
	int i = 0,j = 0,arrastar;//variaveis 
	printf("Insira o Valor Desejado para Arrastar");//pede entrada de dados 
	scanf("%d",&arrastar);//analize de dados
	for(i = arrastar; i < 32; i++)//laco para percorrer dados inseridos 
	{
		resultado[i] = binario1[j];
		j++;
	}
	for(; j < 32; j++)//laco para conversao
		resultado[j] = 0;	
}

int main()
{
	int n,i;
	printf("MENU, digite um para NOT,2para AND,3 para OR,4 para XOR, 5 para RIGHTSHIFT, 6 para LEFTSHIFT \n\n");
	scanf("%d",&n);
	switch(n)//funcao para escolher uma opcao
	{
		{
			case 1://conversao de decimal para binario 
			scanf("%d", &decimal1);//escaneia numero entrado
			getchar();
			dec2bin1(decimal1);//chama funcao 
			NOT();//chama funcao
			printf("NOT %d (", decimal1);
			for(i = 31; i >= 0; i--)//laco para conversao
			{
				printf("%d", binario1[i]);// mostra resultado
			}
			printf(")\n");
			break;//Faz uma pausa
		}
		case 2:
		{
			AND();//funcao
			printf("Digite o valor do primeiro numero decimal ");//pede entrada de valores para conversao
			scanf("%d",&decimal1);//analiza valores
			getchar();
			printf("Digite o valor do segundo numero decimal ");//pede entrada de valores para conversao
			scanf("%d",decimal2);//analiza valores
			getchar();
				printf("AND %d (", decimal1);
			for(i = 31; i >= 0; i--)//laco para conversao
			{
				printf("%d", binario1[i]);//mostra resultado
			}
			printf(")\n");
			break;//Faz uma pausa
		}	
		case 3:
		{
			OR();//funcao
			printf("Digite o valor do primeiro numero  decimal");//pede entrada de valores para conversao 
			scanf("%d",&decimal1);//analiza valores
			getchar();
			printf("Digite o valor do segundo numero decimal");//pede entrada de valores para conversao
			scanf("%d",decimal2);//analiza valores
			getchar();
			break;//Faz uma pausa
		}
		case 4:
		{
			XOR();
			printf("Digite o valor do primeiro numero  decimal");//pede entrada de valores para conversao 
			scanf("%d",&decimal1);//analiza valores
			getchar();
			printf("Digite o valor do segundo numero decimal");//pede entrada de valores para conversao 
			scanf("%d",decimal2);//analiza valores
			getchar();
			break;//Faz uma pausa
		}
		case 5:
		{
			RT();
			dec2bin1(decimal1);
			printf("Digite o valor do primeiro numero  decima");//pede entrada de valores para conversao 
			scanf("%d",&decimal1);//analiza valores
			getchar();
			printf("RIGHTSHIFT %d (", decimal1);
			for(i = 31; i >= 0; i--)//laco para conversao
				printf("%d", binario1[i]);
			}
			printf(")\n");
			break;//Faz uma pausa
		
		case 6:
				{
			LT();//chama funcao
			dec2bin1(decimal1);
			printf("Digite o valor do primeiro numero  decimal");////pede entrada de valores para conversao 
			scanf("%d",&decimal1);//escaneia os dados inseridos
			getchar();
			printf("LEFTHSHIFT %d (", decimal1);
			for(i = 31; i >= 0; i--)//laco para conversao
			{
				printf("%d", binario1[i]);//mostra o numero em binario
			}
			printf(")\n");
		
		}
}
}
