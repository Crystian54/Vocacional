/*par e impar*/
#include<stdio.h>
#include<conio.h>
main()
{
    int num,par=0,imp=0,i;
    i:
    printf("\n\t dame un numero \n");
    scanf("%d",&num);
    for(i=1;i<=10;)
    if(num==0)
    {
        goto fin;

    }
    else
     {
        if(num%2==0)
        {
        printf("\n\t %d es par\n",num);
        par=par+i;
        goto i;
        }
        else
        {
        printf("\n\t %d es impar\n",num);
        imp=imp+i;
        goto i;
        }
    }
    fin:
    printf("\n\t los pares suman igual a %2.2d \n",par);
    printf("\n\t los pares suman igual a %2.2d \n",imp);
    getch();
    return 0;
}
