#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.142857
#define rad uhel * PI / 180

int main(){
    printf("uhel\t rad\t sin\t cos\n\n");
    for(int uhel = 0; uhel <= 360; uhel += 30)
    {
        double x = sin(uhel);
        double y = cos(uhel);
        printf("%3d\t %.3f\t %.3f\t %.3f\n", uhel, rad, x, y);
    }
    return 0;
}