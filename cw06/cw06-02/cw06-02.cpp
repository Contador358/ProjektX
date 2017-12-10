#include <stdio.h>
#include <math.h>
float suma(int liczby[],int ile){
    int i;
    float suma=0;
    for(i=0;i<=ile-1;i++)
        suma+=liczby[i];
    return suma;
}
float srednia_arytm(int liczby[],int ile){
     return suma(liczby,ile)/ile;
}
float sr_geom(int liczby[],int ile){
     float iloczyn=1;
     float stopien=0;
     int i;
     for(i=0;i<=ile-1;i++){
        iloczyn*=liczby[i];
        stopien++;
        stopien++;
        printf("wypisz %.2f %.2f\n",iloczyn,stopien);
}
     return pow(iloczyn,(1/stopien));
}
int main(){
     int n=12;
     int liczby[n];
     FILE *plik;
     plik=fopen("cyfry.txt","r");
     if(!plik){
         puts("\nBlad otwierania pliu cyfry.txt\n");
         return(1);
     }
     int ile;
     for(ile=0;ile<=n-1;ile++){
         fscanf(plik,"%d", &liczby[ile]);
     }
     printf("suma wynosi %.0f\n",suma(liczby,n));
     printf("srednia arytmetyczna wynosi %.3f\n",srednia_arytm(liczby,n));
     printf("srednia geometryczna wynosi %.3f\n",sr_geom(liczby,n));
     fclose(plik);
     return 0;
}


