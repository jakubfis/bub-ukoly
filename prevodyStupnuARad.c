#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.141592

int degToRad;
int radToDeg;
float rad;
float deg;

int main()
{
    int fce;
    printf("Funkce: \n");
    scanf("%d", &fce);

//Pri vyberu funkce zadejte 1 pro prevod stupnu na rad a 2 pro prevodu rad na stupne
    if(fce < 2){
        printf("Zadejte stupne: \n");
        scanf("%d", &degToRad);
        rad = degToRad * PI / 180;
        printf("Rad = %f", rad);
    }else{
        printf("Zadejte rad: \n");
        scanf("%d", &radToDeg);
        deg = radToDeg * 180 / PI;
        printf("Deg = %f", deg);
    }
}
