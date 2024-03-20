#include <stdio.h>
#include <conio.h>
#include<locale.h>
#include<stdlib.h>
#include <string.h>
#define size 5
int main(){
	setlocale(LC_ALL,"");
	float numeros[size];
	int i=0,soma=0,media=0;
	
	for(i=0;i<3;i++)
	{
	
	printf("Digite %iª numero:",i+1);
	scanf("%f",&numeros[i]);
		
	}

soma=numeros[0]+numeros[1]+numeros[2];
media=soma/3;
system("cls");
	for(i=0;i<3;i++)
	{
		
	printf("\nNota numero %iª:%.2f",i+1,numeros[i]);
	
}
	
	printf("\nMedia:%.2i",media);
	
}
