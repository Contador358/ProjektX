#include <stdio.h>

int main()
{
        int ile,min,max;
        int liczby[15];

        FILE *plik;
        plik=fopen("dane","r");
        if(!plik){
                puts("Nie mozna otworzyc pliku dane");
                return(1);
                }
        for(ile=0;!feof(plik);ile++){
                fscanf(plik,"%d", &liczby[ile]);
                }
        min=max=liczby[0];
        for(ile=0;ile<=15;ile++){
                if(liczby[ile]>max){
                        max=liczby[ile];
                }
                if(liczby[ile]<min){
                        min=liczby[ile];
                }
        }
                        printf("\n min to %d oraz max to %d\n",min,max);
        return(0);
        }

