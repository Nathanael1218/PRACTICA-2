/* PRACTICA 2 CALCULADORA CON SWICHT
HERNANDEZ GAONA VICTOR NATHANAEL
1AV6 */
#include<stdio.h>
#include<conio.h>
int main()
{
int o;
char op;
float a,b,c;
do{
	printf("Elige la opcion \n");
	printf("1-SUMA \n2-RESTA\n3-MULTIPLICACION\n4-DIVISION\n");
	printf("Elige una opcion (1-4)\n"); scanf("%d",&o);
   printf("Dame el primer operando"); scanf("%f",&a);
   printf("Dame el segundo operando"); scanf("%f",&b);
	switch (o){
		case 1:
		c=a+b;
		break;
		case 2:
		c=a-b;
		break;
		case 3:
		c=a*b;
		break;
		case 4:
		while(b==0){
			printf("b no puede ser 0 dame otro valor de b \n"); scanf("%f",&b);
			}
		c=a/b;
		break;
		default:
		printf("Opcion no valida\n");

	}
	printf("El resultado es %f \n",c);
	printf("Quieres hacer otra operacion?\n");
	printf("(S) Si \n(N) No\n");
	scanf("%c",&op);
	op=getch();
}while(op=='S' || op=='s');
return 0;
}
