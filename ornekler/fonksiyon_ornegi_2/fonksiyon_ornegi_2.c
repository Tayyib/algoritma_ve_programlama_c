/*
 ============================================================================
 Name        : fonksiyon_ornegi_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>

int topla(int x, int y) {

	return (x+y);
}

int main(void)	{

	int toplam,a,b;

	printf("Toplanmasını istediğiniz 2 sayı girin lütfen..");

	scanf("%d %d",&a,&b);

	toplam=topla(a,b);

	printf("%d ve %d toplamı %d ",a,b,toplam);

	return 0;
}
