 /*chicharonera*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
main()
{
char nom [666];
int opc;
float a,b,c,d,x1,x2;
system("color f0");
printf("\n\t Hola guapo dame tu nombre\t");
scanf("%s",&nom);
inicio:
printf("\n\t muy bien %s dame el numero del la variable al cuadrado de la ecuacion\t",nom);
scanf("%f",&a);
printf("\n\t muy bien %s dame el numero del la variable sin elevar\t",nom);
scanf("%f",&b);
printf("\n\t muy bien %s dame el numero del que no posee variable\t",nom);
scanf("%f",&c);
if(a==0)
{
    printf("\n\t vuelve a checar tus datos\t");
    system("pause");
    system("cls");
    goto inicio;
}
else
{
    if(b==0)
    {
    printf("\n\t vuelve a checar tus datos\t");
    system("pause");
    system("cls");
    goto inicio;
    }
    else
    {
    if(c==0)
      {
       printf("\n\t vuelve a checar tus datos\t");
       system("pause");
       system("cls");
       goto inicio;
      }
      else
      {
d=sqrt(b*b-(4*a*b));
x1=((b*-1)+(d))/(2*a);
x2=((b*-1)-(d))/(2*a);
printf("\n\t el valor de x1 es = %2.2f \n",x1);
printf("\n\t el valor de x2 es = %2.2f \n",x2);
printf("\n\t %s deseas calcular otra ecuacion ? \n",nom);
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
   printf("\n\t %s hasta luego \n",nom);
   getch();
   system("cls");
}
      }
    }
}

return 0;
}
