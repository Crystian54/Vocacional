 /*chicharonera*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
main()
{
char nom [666];
int opc;
float a,b,h;
system("color f0");
printf("\n\t Hola guapo dame tu nombre\t");
scanf("%s",&nom);
inicio:
printf("\n\t muy bien %s la hipotenusa\t",nom);
scanf("%f",&h);
printf("\n\t muy bien %s dame el cateto a\t",nom);
scanf("%f",&b);

if(h>b)
{
a=sqrt((h*h)-(b*b));
printf("\n\t el valor de x1 es = %2.2f \n",a);
printf("\n\t %s deseas calcular otro cateto a ? \n",nom);
printf("\n\t\t\t\t\t 1-si \n");
printf("\n\t\t\t\t\t 2-no \n");
printf("\n\t %s elije una ======> \n",nom);
scanf("%d",&opc);
if(opc==1)
{
    system("cls");
    goto inicio;
}
}
else
{
   printf("\n\t %s la hipotenusa debe ser mayor al cateto a\n",nom);
   printf("\n\t checa tus datos plox\n");
   printf("\n\t o regresate al cerro del que viniste \n");
   printf("\n\t %s deseas checar de nuevo \n",nom);
   printf("\n\t\t\t\t\t 1-si \n");
   printf("\n\t\t\t\t\t 2-no \n");
   printf("\n\t %s elije una ======> \n",nom);
   scanf("%d",&opc);
   if(opc==1)
{
    system("cls");
    goto inicio;
}
else
{
   printf("\n\t %s see you \n",nom);
   getch();
   system("cls");
}
}

return 0;
}
