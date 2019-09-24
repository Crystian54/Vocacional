/*par e impar*/
#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("\n\t introduce un numero entero\t");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("\n\t %d es par\n",num);
    }
    else
    {
        printf("\n\t %d es impar\n",num);
    }
    getch();
    return 0;
}
