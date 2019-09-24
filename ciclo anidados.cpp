/*Ciclos anidados*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
    int i,j;
    for( i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            Sleep(50);
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;

}
