//Heitor Henrique Vasconcelos Carneiro 
//11711EEL024
#include<stdio.h>
int main()
{	
	char str[256], *c;
	int	caso, vetor[63],*p, i;
	p=(int*)str;
	c=(char*)vetor;
	do{	printf("\n\n\tDes-Codifica \n\n Escolha que tipo de operacao deseja fazer:\n1. Codificar"
		scanf("%d", &caso); getchar();
	
		switch(caso)
		{
			case 1:
				
				printf("\n Entre com uma mensagem de ate 255 caracteres:\n");
				fgets(str,256, stdin);
				//getchar();
				for (i=0;i<sizeof(str);i++)
				{
					printf("%i ",p[i]);
					if(p[i]==0)
					break;
				}			
				break;
			case 2:
				printf("\n  Entre com um codigo numerico de ate 64 numeros:\n"
				for (i=0;i<64;i++)
				{
					vetor[i]=0;
				}
				for (i=0;i<64;i++)
				{
					scanf("%d",&vetor[i]);
					if (vetor[i]==0)
					{break;}
				}
				printf("\n\n");
				for (i=0;i<sizeof(vetor);i++)
				{
					printf("%c",c[i]);
				}
				break;
			
			case 3:
				return 0;
				break;
			}
	}while(caso!=3);		
	return 0;
}
