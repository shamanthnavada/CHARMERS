#include<stdio.h>
#include<ctype.h>
void main()
{
 char ch;
 int n;
 do
 {
 printf("Enter your Number:");
 scanf("%d",&n);
 if(n%2)
 printf("Entered number is odd");
 else
 printf("Entered number is even");
 printf("\nDo you want to enter one more number(y/n):");
 scanf("%s", &ch);

 }while(ch=='y');
}
