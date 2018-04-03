#include<stdio.h>
int media (float n1, float n2, float n3)
{
	float m;
	if((n1<=n2)&&(n1<=n3))
	{
		m=(n2+n3)/2;
		if(m>=6)
			return 0;
		else 
			return 1;}
	if((n2<=n1)&&(n2<=n3))
	{
		m=(n1+n3)/2;
		if(m>=6)
			return 0;
		else 
			return 1;}
	if((n3<=n1)&&(n3<=n2))
	{
		m=(n1+n2)/2;
		if(m>=6)
			return 0;
		else 
			return 1;}
}
int main()
{
	float n1, n2, n3;
	printf("Digite a nota.");
	scanf("%f",&n1);
	printf("Digite a nota.");
	scanf("%f",&n2);
	printf("Digite a nota.");
	scanf("%f",&n3);
	int resp=media(n1,n2,n3);
	if (resp==0)
		printf("Aprovado.");
	if (resp==1)
		printf("Reprovado");
	return 0;
}
