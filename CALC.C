#include<stdio.h>
int main()
{
float n1 , n2 ;
char op;
printf("calculator");
printf("enter number 1 :");
scanf("%f",&n1);
printf("enter number 2 :");
scanf("%f",&n2);
printf("enter operation +,-,*,/ :");
scanf("%c",&op);
switch(op)
{
	case '+':
	printf("%f",n1 + n2);
	break;
	case '-':
	printf("%f",n1 - n2);
	break;
	case '*':
	printf("%f",n1 * n2);
	break;
	case '/':
	printf("%f",n1 / n2);
	break;
	default :
	printf("invalid operator");
	}
	return 0;
}