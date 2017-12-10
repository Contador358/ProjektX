#include <stdio.h>
int main()
{
int kwadrat;
int i;
for (i=1;i<=12;i++){
    kwadrat=i*i;
    printf("%d ",kwadrat);}
    printf("\n");

i=1;
    while(i<=12){
    kwadrat=i*i;
    i++;
    printf("%d ",kwadrat);}
    printf("\n");
i=1;
do {
    kwadrat=i*i;
    i++;
    printf("%d ", kwadrat);}
    while(i<=12);

return 0;
}

