#include<stdio.h>
#define MAX 100

void Input(int &n)
{
  do{
    printf("Input N: ");
    scanf("%d", &n);
    if(n<=0 || n>100)
      printf("Please try again!\n");
  }while(n<=0 || n>100);
}
void InArr(int a[], int n)
{
  for(int i=1; i<=n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}
void outArr(int a[], int n)
{
  for(int i=1; i<=n; i++)
  printf("%d\t", a[i]);
}
int count(int n)
{
  int d=0;
  for(int i=1; i<=n; i++)
    if(n%i==0)
    d++;
  if(d==2)
    return 1;
  else
    return 0;
}
int MaxPrime(int a[], int n)
{
  int p, i, d;
  for(i=1; i<=n; i++)
  {
    if(count(a[i])==1)
    {
      d=a[i];
      break;
    }
  }
  if(i>n)
    return -1;
  p=d;
  for(i=p+1; i<=n; i++)
    if(count(a[i])==1 && p<a[i])
      p=a[i];
  return p;
}
int MinPrime(int a[], int n)
{
  int p, i, d;
  for(i=1; i<=n; i++)
  {
    if(count(a[i])==1)
    {
      d=a[i];
      break;
    }
  }
  if(i>n)
    return -1;
  p=d;
  for(i=p+1; i<=n; i++)
    if(count(a[i])==1 && p>a[i])
      p=a[i];
  return p;
}
int main()
{
  int n;
  int a[MAX];
  Input(n);
  InArr(a, n);
  outArr(a, n);
  int mp = MaxPrime(a, n);
  int np = MinPrime(a, n);
  if(MaxPrime(a, n)==-1 && MinPrime(a, n) ==-1)
  {
    printf("\nNon prime!");
  }
  else if(MaxPrime(a, n)==MinPrime(a, n))
  {
    printf("\nPrime = %d", MinPrime(a, n));
  }
  else
  {
    printf("\nMax prime is: %d", mp);
    printf("\nMin prime is: %d", np);
  } 
  return 0;
}
