//Heitor Henrique Vasconcelos Carneiro 
//11711EEL024
#include <stdio.h>

int main()
{
	int j , i,num[64], *pnum;
	char msg[256], *pmsg;
	
	for(i = 0; i < 256; i++) msg[i] = '\0';
	printf("\t1Para Codificar a mensagem\n\t2 Para Decodificar a frase\n\t Escolha uma das opcoes: ");
	scanf("%d",&j);
	getchar();
	
	switch(j)
	{
		
		case 1:{
			printf("\tLimite maximo de caracteres eh de 255: \n\n\t");//indica quantidade maxima de caracteres 
			gets(msg);//varre a mensagem
			char *pmsg= msg;
			printf("\n\t Frase ja codificada:\n\t\t");//mostra para usuario
			
			for(i=0;msg[i];i++)
			{//laco para codificar
				pnum = (int*)pmsg;
				if(pnum[i]!=0) printf("%d",pnum[i]);
				if(pnum[i+1]!=0) printf(", ");
				}
			break;//pausa
		}
		
		case 2:
		{
			printf("\tDigite os numeros sendo o maximo de 64 algarismos.O ultimo algarismo (64) entre 1 e ""4095!!!\n   \t\tObs:Digite a letra 0 p/ finalizar a entrada de numeros\n\n\n]");//explicando funcao do programa
			
			for(i=0;i<64;i++)//laco para varrer numeros
			 {
				printf("\tn%d:\t ", i+1); scanf("%d", &num[i]);//mostrar e ler numeros
				pmsg = (char*)num;
				if(num[i]==0) //laço para decodificacao
				break;
			 }
			 
			 printf("\n\n\tFrase decodificada: %s", pmsg);//mostra frase decodificada
	    }
	    
			
	}}


