#include <stdio.h>

quantidade(float comodo, float piso)
{
	float r=comodo/piso;
	return r;
} 

int main()
{
	float piso, comodo, r;
	printf("Digite o tamanho do comodo em metros quadrados.");
	scanf("%f", &comodo);
	printf("Digite o tamanho do piso em metros quadrados.");
	scanf("%f", &piso);
	r=quantidade(comodo, piso);
	printf("A quantidade de pisos necessaria e: %f", r);
	return 0;
}
