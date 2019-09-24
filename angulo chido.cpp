/*angulos*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
main()
{
char nom [666];
int opc;
float a,b,h,aa,ab,ac,ad;
system("color f0");
printf("\n\t Hola guapo dame tu nombre\t");
scanf("%s",&nom);
inicio:
printf("\n\t muy bien %s dame el cateto a\t",nom);
scanf("%f",&a);
printf("\n\t muy bien %s dame el cateto b\t",nom);
scanf("%f",&b);
ac=90;
h=sqrt((a*a)+(b*b));
aa=(b/h);
ad=(asin(aa))*(180/3.1416);
ab=180-ad-ac;
printf("\n\t muy bien %s la hipotenusa es = %2.2f \t",nom,h);
printf("\n\t muy bien %s los grados del angulo a son = %2.2f \t",nom,ad);
printf("\n\t muy bien %s los grados del angulo b son = %2.2f \t",nom,ab);
printf("\n\t recuerda qu el angulo c simpre es = 90 grados\t");
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


return 0;
}
