#include<stdio.h>


void nibbles_read_from_byte(int x, int *lsb, int *msb){
    printf("you enter byte is : %d\n",x);
    int lsb_temp = (x & 15);
    int msb_temp = ((x>>4) & 15);
    
    *lsb = lsb_temp;
    *msb = msb_temp;
}


int byte_formation_to_nibbles(int lsb, int msb){
    printf("lsb : %d\n",lsb);
    printf("msb : %d\n",msb);
    int result;
    result = ((msb & 15)<<4) + (lsb & 15);

    return result;
}


int main(){


int x,lsb,msb;

int nib1,nib2,byte_t;
printf("Enter an byte to split into nibbles : \n");
scanf("%d",&x);

nibbles_read_from_byte(x,&lsb,&msb);
printf("Lsb : %d\nMsb : %d\n",lsb,msb);


printf("Enter two nibbles to form a byte (lsb then msb): \n");
scanf("%d%d",&nib1,&nib2);

byte_t = byte_formation_to_nibbles(nib1,nib2);

printf("Your bit is : %d\n",byte_t);





    return 1;
}