#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int x, int y, int z) {
    if (x>y && x>z){
        return x;
    }else if (y>x && y>z){
        return y;
    }else{
        return z;
    }
}

int main() {
    printf("max: %d", max (111,744,248));
    return 0;
}
//shout out prexik