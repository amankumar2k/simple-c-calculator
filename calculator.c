/******** C program For Calculator By (Dream boy) *************/

#include<stdio.h>
#include<conio.h>
main()
{
int num1, num2, result = 0;
char choice;

while(1)
{
printf("\n  ******CALCULATOR***** :");
printf("\n  Enter  The  First  Number :");
scanf("%d",&num1);

printf("\n Enter  an  Operator (+, -, *, /, %):");
choice=getch();
scanf(" %c",&choice);

printf("\n Enter  The  Second  Number:");
scanf("%d",&num2);

switch(choice)
{
case '+':  result = num1 + num2;
   printf("\n The Sum is = %d",result);
 break;
 
case '-': result = num1 - num2;
   printf("\n  The  Difference  is = %d",result);
   break;
 
case '*':  result = num1 * num2;
   printf("\n The  Product  is = %d",result);
   break;
 
case '/':  result = num1 / num2;
   printf("\n The  result  is = %d",result);
   break;
 
case '%':  result = num1 % num2;
   printf("\n The  Modulo  is = %d",result);
   break; 
 
default:
   
   printf("\n  Please  Enter  The  Valid  Operator!!!\n");
  }
getch();
}
}

