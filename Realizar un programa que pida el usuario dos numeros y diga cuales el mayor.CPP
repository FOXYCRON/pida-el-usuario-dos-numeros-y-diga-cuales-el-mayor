/* Realizar un programa que pida el usuario dos numeros y diga cuales el mayor */
#include<conio.h>
#include<stdio.h>
int n1, n2;
main ()
{

	printf("Comparacion de dos numeros \n\n");
   printf(" Dame el primer n%cmero ", 163); scanf("%d", &n1);
   printf(" Dame el segundo numero ", 163); scanf("%1.d", &n2);

   if (n1>n2)

   printf("\n El primer n%cmero es mayor que el segundo", 163); scanf("%d", &n1);

   else
   printf("\n El segundo n%cmero es mayor que el primero", 163); scanf("%d", &n2);
   getch();
  }