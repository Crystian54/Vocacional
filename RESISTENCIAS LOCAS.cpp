/*circuito*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

main()
{
    char nom[15];
    int con,o,o2;
    float r1,r2,r3,r4,rts,rt,i,v;
    printf("\n\t Hola, ingresa la contraseña\t");
    scanf("%d",&con);
    if(con==8)
    {
        system("cls");
        printf("\n\t Dame tu nombre\t");
        scanf("%s",&nom);
        i:
        system("cls");
        printf("\n\t\t\t MENU DE CIRCUITOS\n");
        printf("\n\t\t 1.- Serie\n");
        printf("\n\t\t 2.- Paralelo\n");
        printf("\n\t\t 3.- Mixto\n");
        printf("\n\t\t 4.- Salir\n");
        printf("\n\t\t\t %s , elige una opcion\t",nom);
        scanf("%d",&o);
        switch (o)
        {
            case 1: printf("\n\t Dame el valor de la resitencia 1\t");
                    scanf("%f",&r1);
                    printf("\n\t Dame el valor de la resitencia 2\t");
                    scanf("%f",&r2);
                    printf("\n\t Dame el valor de la resitencia 3\t");
                    scanf("%f",&r3);
                    printf("\n\t Dame el valor del voltaje\t");
                    scanf("%f",&v);
                    rt=r1+r2+r3;
                    i=v/rt;
                    printf("\n\t %s el valor de la resistencia total es=%2.3f ohm\n",nom,rt);
                    printf("\n\t %s el valor de la intensidad total es=%2.3f A\n",nom,i);
                    getch();
                    system("cls");
                    printf("\n\t ¿ %s deseas calcular algo mas?\n",nom);
                    printf("\n\t\t 1.- Si\n");
                    printf("\n\t\t 2.- No\n");
                    scanf("%d",&o2);
                    if(o2==1)
                    {
                        goto i;
                    }
                    break;
            case 2:printf("\n\t Dame el valor de la resitencia 1\t");
                    scanf("%f",&r1);
                    printf("\n\t Dame el valor de la resitencia 2\t");
                    scanf("%f",&r2);
                    printf("\n\t Dame el valor de la resitencia 3\t");
                    scanf("%f",&r3);
                    printf("\n\t Dame el valor del voltaje\t");
                    scanf("%f",&v);
                    rt=1/((1/r1)+(1/r2)+(1/r3));
                    i=v/rt;
                    printf("\n\t %s el valor de la resistencia total es=%2.3f ohm\n",nom,rt);
                    printf("\n\t %s el valor de la intensidad total es=%2.3f A\n",nom,i);
                    getch();
                    system("cls");
                    printf("\n\t ¿ %s deseas calcular algo mas?\n",nom);
                    printf("\n\t\t 1.- Si\n");
                    printf("\n\t\t 2.- No\n");
                    scanf("%d",&o2);
                    if(o2==1)
                    {
                        goto i;
                    }
                    break;

            case 3: printf("\n\t %s toma en cuenta que las resistencias 3 y 4 estan en serie\n",nom);
                    printf("\n\t Dame el valor de la resitencia 1\t");
                    scanf("%f",&r1);
                    printf("\n\t Dame el valor de la resitencia 2\t");
                    scanf("%f",&r2);
                    printf("\n\t Dame el valor de la resitencia 3\t");
                    scanf("%f",&r3);
                    printf("\n\t Dame el valor de la resitencia 4\t");
                    scanf("%f",&r4);
                    printf("\n\t Dame el valor del voltaje\t");
                    scanf("%f",&v);
                    rts=r3+r4;
                    rt=1/((1/r1)+(1/r2)+(1/rts));
                    i=v/rt;
                    printf("\n\t %s el valor de la resistencia total es=%2.3f ohm\n",nom,rt);
                    printf("\n\t %s el valor de la intensidad total es=%2.3f A\n",nom,i);
                    getch();
                    system("cls");
                    printf("\n\t ¿ %s deseas calcular algo mas?\n",nom);
                    printf("\n\t\t 1.- Si\n");
                    printf("\n\t\t 2.- No\n");
                    scanf("%d",&o2);
                    if(o2==1)
                    {
                        goto i;
                    }
                    break;
            default: printf("\n\t Adios wap@\n");
                getch();
        }
    }
    return 0;
}
