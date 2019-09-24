/*Practica No.1*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
main()

{
    char nombre [666];
    int OPC, RESP;
    float kg, m, s, k, ton, lb, gr, km, dc, cm, mn, hr, fr,c;
    system("color 5a");
    system("cls");

    printf("\n\t Hola guapo dame tu nombre\t");
    scanf("%s",&nombre);
    system("color 5a");
    system("cls");

    inicio:
    printf("\n\t\t\t\t MENU DE COMVERSIONES\t");
    printf("\n\t Muy bien %s, elige la opcion que deseas:\t",nombre);

    printf("\n\t\t 1.- masa \t");
    printf("\n\t\t 2.- longitud\t");
    printf("\n\t\t 3.- tiempo\t");
    printf("\n\t\t 4.- temperatura\t");
    printf("\n\t\t 5.- salir\t");
    printf("\n\t\t selecciona el que te sirve\t");
    scanf("%d",&OPC);

    switch(OPC)
    {
        case 1: system("color 5a");
                system("cls");
                printf("\n\t Ok %s ingresa el valor en kg\t",nombre);
                scanf("%f",&kg);
                printf("\n\t %s las posbles comversiones son: \t",nombre);
                ton=kg/1000;
                lb=kg*2.20462;
                gr=kg*1000;
                printf("\n\t %s en toneladas son = %2.2f \t",nombre,ton);
                printf("\n\t %s en libras son = %2.2f \t",nombre,lb);
                printf("\n\t %s en toneladas son = %2.2f \t",nombre,gr);
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
        case 2: system("color 5c");
                system("cls");
                printf("\n\t Ok %s ingresa el valor en metros \t",nombre);
                scanf("%f",&m);
                printf("\n\t %s las posbles comversiones son: \t",nombre);
                km=m/1000;
                dc=m*10;
                cm=m*100;
                printf("\n\t %s en kilometros son = %2.2f \t",nombre,km);
                printf("\n\t %s en decimetros = %2.2f \t",nombre,dc);
                printf("\n\t %s en centimetros son = %2.2f \t",nombre,cm);
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
        case 3: system("color 7a");
                system("cls");
                printf("\n\t Ok %s ingresa el valor en segundos\t",nombre);
                scanf("%f",&s);
                printf("\n\t %s las posbles comversiones son: \t",nombre);
                mn=s /60;
                hr=mn/60;
                printf("\n\t %s en minutos son = %2.2f \t",nombre,mn);
                printf("\n\t %s en horas son = %2.2f \t",nombre,hr);
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
        case 4: system("color 3e");
                system("cls");
                printf("\n\t Ok %s ingresa el valor en grados calvin \t",nombre);
                scanf("%f",&k);
                printf("\n\t %s las posbles comversiones son: \t",nombre);
                c=k-273,15;
                fr=(c *1.8 )+ 32;
                printf("\n\t %s a grados celsius son = %2.2f \t",nombre,c);
                printf("\n\t %s en fr son = %2.2f \t",nombre,fr);
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
