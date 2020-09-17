#include <stdio.h>

void bitWise_operator(int x, int y){
    printf("AND : %d\n",x & y);
    printf("OR : %d\n",x | y);
    printf("XOR : %d\n",x ^ y);
    printf("NOT for %d : %d\n",x,(~x));
    printf("NOT for %d : %d\n",y,(~y));
    printf("LEFT SHIFT  %d << %d : %d\n",x,1,(x<<1));
    printf("LEFT SHIFT  %d << %d : %d\n",y,1,(y<<1));
    printf("RIGHT SHIFT  %d >> %d : %d\n",x,1,(x>>1));
    printf("RIGHT SHIFT  %d >> %d : %d\n",y,1,(y>>1));
}


int main(){

    int x,y;
    printf("Enter the value of x and y for bitwaise operator eg.\n");
    scanf("%d%d",&x,&y);
    bitWise_operator(x,y);

    return 1;
}