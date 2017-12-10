#include <stdio.h>
#include <math.h>

long int silnia(int n)
{
  long int sil=1;
  int i;
  for(i=1;i<=n;i++)
    sil*=i;
  return sil;
}

int main()
{
  int y;
  long int s;
  printf("podaj liczbe \n");
  scanf("%d", &y);
  if(y<0){
        printf("\nsilnia z liczby ujemnej nie istnieje\n");
  }
  else{
        s=silnia(y);
        printf("\nwynik to %d\n",s);
  }
  return 0;
}

