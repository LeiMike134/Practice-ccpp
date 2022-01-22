#include<stdio.h>

int main()
{
    unsigned y, m, dow, d, top, y1, m1;

    printf("Year: ");
    scanf("%d", &y);
    m=1;
    y1=y-(14-m)/12;
    m1=m+12*((14-m)/12)-2;
    dow=(1+y1+y1/4-y1/100+y1/400+(31*m1)/12)%7;
    for(m=1; m<=12; ++m)
    {   
        switch(m)
        {
            case 1: printf("\nJanuary\n"); break;
            case 2: printf("\nFebruary\n"); break;
            case 3: printf("\nMarch\n"); break;
            case 4: printf("\nApril\n"); break;
            case 5: printf("\nMay\n"); break;
            case 6: printf("\nJune\n"); break;
            case 7: printf("\nJuly\n"); break;
            case 8: printf("\nAugust\n"); break;
            case 9: printf("\nSeptember\n"); break;
            case 10: printf("\nOctober\n"); break;
            case 11: printf("\nNovember\n"); break;
            case 12: printf("\nDecember\n"); break;
            printf("%s\n", m);
        }
        switch(m)
        {
            case 4: case 6: case 9: case 11: top = 30; break;
            case 2: top = 28 + ((y%4==0 && y%100) || y%400==0); break;
            default: top = 31;
        }
        /////////////////////
        printf("    Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");
        for(d=0; d<dow; ++d)
            printf("      ");
            //////////////////////
        for(d=1; d<=top; ++d)
        {
            printf("%6u", d);
            if((dow+d)%7 == 0) 
                putchar('\n');
        }
        /////////////////
        dow = (dow+top)%7;
        if(dow) 
            putchar('\n');
    }
    return 0;
}