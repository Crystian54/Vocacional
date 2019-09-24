/*ciclo*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,c,z;
    printf("\n\t hola dame un nmero entero positvo inicial\t");
    scanf("%d",&a);
    printf("\n\t hola dame un nmero entero positvo limite \t");
    scanf("%d",&c);
    z=a;
    while(z<=c)
    {
        printf("\n\t %d \t",z);
        z=z+1;
    }
    getch();
    return 0;
}
