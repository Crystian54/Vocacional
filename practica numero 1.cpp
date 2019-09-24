/*Practica No.1*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
main()

{
    char nombre [15];
    int OPC, RESP;
    float cm,m,kg,ton,ma,hrs,pul,pie,milla,lib,lt,m3;

    system("color 5a");
    system("cls");

    printf("\n\t Hola dame tu nombre\t");
    scanf("%s",&nombre);
    system("color 5a");
    system("cls");

    inicio:
    printf("\n\t\t\t\t MENU DE CONVERSIONES\t");
    printf("\n\t Muy bien %s, elige la opcion que deseas:\t",nombre);

    printf("\n\t\t 1.- MASA\t");
    printf("\n\t\t 2.- LONGITUD \t");
    printf("\n\t\t 3.- TIEMPO\t");
    printf("\n\t\t 4.- TEMPERATURA\t");
    printf("\n\t\t 5.- Salir \t");
    scanf("%d",&OPC);

    switch(OPC)
    {
        case 1: system("color 5a");
                system("cls");
                printf("\n\t Ok %s dame el valor del Cateto A\t",nombre);
                scanf("%f",&A);
                printf("\n\t Ok %s dame el valor del Cateto B\t",nombre);
                scanf("%f",&B);
                C=sqrt((A*A)+(B*B));
                printf("\n\t Bien %s, El valor de la Hipotenusa es de %2.2f\n",nombre,C);
                system("pause");
                printf("\n\t ¡Oye %s! Deseas otro calculo; SI=1, NO= 2\t",nombre);
                scanf("%d",&RESP);

                if(RESP==1)
                {
                    goto inicio;
                }

                else
                {
                    printf("\n\t ¡Nos vemos %s...!\n",nombre);
                    system("pause");
                    break;
                }

        case 2: system("color 6d");
                system("cls");
                printf("\n\t Ok %s dame el valor de la Hipotenusa\t",nombre);
                scanf("%f",&C);
                printf("\n\t Ok %s dame el valor del Cateto B\t",nombre);
                scanf("%f",&B);
                A=sqrt((C*C)-(B*B));
                printf("\n\t Bien %s, El valor del Cateto A es de %2.2f\n",nombre,A);
                system("pause");
                printf("\n\t ¡Oye %s! Deseas otro calculo; SI=1, NO= 2\t",nombre);
                scanf("%d",&RESP);

                if(RESP==1)
                {
                    goto inicio;
                }

                else
                {
                    printf("\n\t ¡Nos vemos %s...!\n",nombre);
                    system("pause");
                    break;
                }

        case 3: system("color 6f");
                system("cls");
                printf("\n\t Ok %s dame el valor de la Hipotenusa\t",nombre);
                scanf("%f",&C);
                printf("\n\t Ok %s dame el valor del Cateto A\t",nombre);
                scanf("%f",&A);
                B=sqrt((C*C)-(A*A));
                printf("\n\t Bien %s, El valor del Cateto B es de %2.2f\n",nombre,B);
                system("pause");
                printf("\n\t ¡Oye %s! Deseas otro calculo; SI=1, NO= 2\t");
                scanf("%d",&RESP);

                if(RESP==1)
                {
                    goto inicio;
                }

                else
                {
                    printf("\n\t ¡Nos vemos %s...!\n",nombre);
                    system("pause");
                    break;
                }

        case 4: system("color 6e");
                system("cls");
                printf("\n\t Ok %s dame el valor del Cateto A\t",nombre);
                scanf("%f",&A);
                printf("\n\t Ok %s dame el valor del Cateto B\t",nombre);
                scanf("%f",&B);
                C=sqrt((A*A)-(B*B));
                printf("\n\t Bien %s, El valor de la Hipotenusa es de %2.2f\n",nombre,C);
                AR=((A*B)/2);
                P=(A+B+C);

                printf("\n\t Bien %s, El valor del Area es de %2.2f\n",nombre,AR);
                printf("\n\t Bien %s, El valor del Perimetro es de %2.2f\n",nombre,P);
                system("pause");
                printf("\n\t ¡Oye %s! Deseas otro calculo; SI=1, NO= 2\t",nombre);
                scanf("%d",&RESP);

                if(RESP==1)
                {
                    goto inicio;
                }

                else
                {
                    printf("\n\t ¡Nos vemos %s...!\n",nombre);
                    system("pause");
                    break;
                }

        default: system("color f0");
                 system("cls");
                 printf("\n\t <<OPCION INCORRECTA>>\n");
                 system("pause");
    }

    return 0;

}
