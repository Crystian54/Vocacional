/*ejemplo for*/
#include<stdio.h>
#include<conio.h>
main()
{
    int c;
    c=0;
    for(c=0;c<1000000;c=c+1)
    {
        printf("%d ",c);
    }
    getch();
    return 0;
}
