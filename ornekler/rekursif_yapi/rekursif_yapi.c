/*
 ============================================================================
 Name        : rekursif_yapi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int faktoriyel(int sayi){

   if(sayi==0) return 1;

   else return sayi*faktoriyel(sayi-1);
}

int main() {

   int sayi,deger;

   printf("Bir Sayi Giriniz ---> "); scanf("%d",&sayi);

   deger=faktoriyel(sayi);

   printf("%d",deger);
}
