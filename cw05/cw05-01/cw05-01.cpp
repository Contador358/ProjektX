#include <stdio.h>
#include <math.h>

int main(){
  int x,y;
  long long silnia;
  silnia=1;
  printf("podaj liczbe \n");
  scanf("%d", &y);
  if(y<0){
        printf("\nsilnia z liczby ujemnej nie istnieje\n");
  }
  else{
        x=y;
        while(x>0)
                silnia*=x--;
        printf("\nsilnia z %d = %lld\n",y,silnia);
  }
  return 0;
}
