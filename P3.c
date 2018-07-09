//Heitor Henrique Vasconcelos Carneiro 
//11711EEL024
#include <stdio.h>


void bits(unsigned int numero, int t) //função 

{

	if(t != 0) //condição

	{

	bits(numero/2, t-1);// divisão do número por 2, "t"varre a string

	printf("%d", (numero % 2));//mostra o restante da divisão efetuada na linha anterior 

	}	

}

int main()

{

	int u, x, y, resultado;//declarando variaveis

	printf(" 1 = NOT \n 2 = AND \n 3 = OR \n 4 = XOR \n 5 = Right Shift \n 6 = Left Shift");

	printf("\n\n Escolha uma opcao logica: ");

	scanf("%d", &u);//armazena opcao selecionada

	switch(u)

	{

		case 1:

			printf("\n Insira o numero: ");//guarda valor inserido pelo usuario

			scanf("%d", &x);//guarda o valor inserido pelo usuario e x na variavel

			getchar(); // lê o caractere e retorna um inteiro 

			printf("\n ARGUMENTO NOT %d", x);

			printf("[");

			bits(x, 32); //chama função declarada fora do main 

			printf("]");

			resultado=~x; //opcao "not"

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);//chama função declarada fora do main 
			printf("]");

			break;//parada 


		case 2:

			printf("\n Insira o numero: ");//guarda valor inserido pelo usuario

			scanf("%d", &x);//guarda o valor inserido pelo usuario e x na variavel

			getchar();//lê o caractere e retorna um inteiro 

			printf("Insira o segundo numero: ");

			scanf("%d", &y);//guarda o valor acima em y

			getchar();

			printf("\n\n%d", x );

			printf("[");

			bits(x, 32);//chama função declarada fora do main 

			printf("]");

			printf(" ARGUMENTO AND %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x&y; // opcao  "and"

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);//chama função declarada fora do main 

			printf("]");

			break;

		case 3:

			printf("\n Insira o numero: ");//guarda valor inserido pelo usuario

			scanf("%d", &x);//guarda o valor inserido pelo usuario e x na variavel

			getchar();//lê o caractere e retorna um inteiro 

			printf(" Insira o segundo numero: ");

			scanf("%d", &y);

			getchar();

			printf("\n\n%d", x);

			printf("[");

			bits(x, 32);//chama função declarada fora do main 

			printf("]");

			printf(" ARGUMENTO OR %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x|y; // opcao  "or" 

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);//chama função declarada fora do main 

			printf("]");

			break;

		case 4:

			printf("\n Insira o numero: ");//guarda valor inserido pelo usuario

			scanf("%d", &x);//guarda o valor inserido pelo usuario e x na variavel

			getchar();//lê o caractere e retorna um inteiro 

			printf("Insira o segundo numero: ");

			scanf("%d", &y);

			getchar();

			printf("\n\n%d", x);

			printf("[");

			bits(x, 32);//chama função declarada fora do main 

			printf("]");

			printf(" ARGUMENTO XOR %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x^y; //opcao "xor"

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);//chama função declarada fora do main 

			printf("]");

			break;

		case 5:

			printf("\n Insira o numero: ");//guarda valor inserido pelo usuario

			scanf("%d", &x);//guarda o valor inserido pelo usuario e x na variavel

			getchar();//lê o caractere e retorna um inteiro 

			printf("Insira o segundo numero: ");

			scanf("%d", &y);

			getchar();

			printf("\n\n%d", x);

			printf("[");

			bits(x, 32);//chama função declarada fora do main 

			printf("]");

			printf(" ARGUMENTO RIGHT SHIFT >> %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x>>y; //opcao "right shift"

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);//chama função declarada fora do main 

			printf("]");

			break;

		case 6:

			printf("\n Insira o numero: ");//guarda valor inserido pelo usuario

			scanf("%d", &x);//guarda o valor inserido pelo usuario e x na variavel

			getchar();//lê o caractere e retorna um inteiro 

			printf(" Insira o segundo numero: ");

			scanf("%d", &y);

			getchar();

			printf("\n\n%d", x);

			printf("[");

			bits(x, 32);//chama função declarada fora do main 

			printf("]");

			printf(" ARGUMENTO LEFT SHIFT << %d", y);

			printf("[");

			bits(y, 32);

			printf("]");

			resultado=x<<y; //opcao "left shift"

			printf(" : %d", resultado);

			printf("[");

			bits(resultado, 32);//chama função declarada fora do main 

			printf("]");

			break;

	}

	getchar();

	return 0;

}
