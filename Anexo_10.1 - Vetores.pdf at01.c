#include<stdio.h>
#include<locale.h>
#define size 4
int main(){
setlocale(LC_ALL,"");
float notas[size],media=0;
int soma=0,i=0;

for(i=0;i<4;i++){
	
	printf("Digite %iª:",i+1);
	scanf("%f",&notas[i]);
}

soma=notas[0]+notas[1]+notas[2]+notas[3];
media=soma/4;
	
system("cls");
for(i=0;i<4;i++){
	
printf("\nNota %iª :%2.f",i+1, notas[i]);

}
	printf("\tMedia:%.2f",media);
	fflush(stdin);
	if(media>=7){
	printf("\tAprovado.");
	} if(media>=5){
	printf("\trecuperacao.");
	} else 
	printf("\tReprovado.");
	
	getch();
}

