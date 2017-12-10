#include <stdio.h>
#include <math.h>
int main()
{
int wynik;
int i;
int k;
for(i=1;i<=10;i++){

    for(k=1;k<=10;k++){
        wynik=i*k;
        printf("%3.d ",wynik);
        }
}

return 0;
}
