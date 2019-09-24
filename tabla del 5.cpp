/*5 enfor*/
#include<stdio.h>
#include<conio.h>
main()
{
    int c,m;
    c=0;
    for(c=1;c<=10;c=c+1)
    {
        m=5*c;
        printf("\n\t 5x %d= %2.2d \t",c,m);
    }
    getch();
    return 0;
}
