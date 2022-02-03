#include<stdio.h>

void InputN(int &n)
{
    do{
        printf("N = ");
        scanf("%d", &n);
        if(n<2001 || n>3000)
            printf("Please try again!\n"); 
    }while(n<2001 || n>3000);
}
int countDivisor(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            c++;
    }
    return c;
}
void Year(int n)
{
    int i;
    for(i=2001; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                if(countDivisor(i)==8)
                {
                    printf("%d ", i);
                    break;
                }
            }
        }
    }
}
int main()
{
    int n;
    InputN(n);
    Year(n);
}

