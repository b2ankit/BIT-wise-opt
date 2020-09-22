#include<stdio.h>
#include<stdlib.h>




int main(){

unsigned char byte = 33;// Read from file
unsigned char mask = 1; // Bit mask
unsigned char bits[8];

unsigned char lsb[4];
unsigned char msb[4];

  // Extract the bits
for (int i = 0; i < 8; i++) {
    // Mask each bit in the byte and store it
    bits[i] = (byte & (mask << i)) != 0;
}
 // For debug purposes, lets print the received data
for (int i = 0; i < 8; i++) {   
    printf("Bit: %d\n",bits[i]);
}

//reading 0 to 3 bit
for(int i=0;i<4;i++){
  lsb[i] = bits[i];
}

//reading 4 to 8 bit
for(int i=4,k=0;i<8;k++,i++){
  msb[k] = bits[i];
}

printf("\n");
for(int i=0;i<4;i++){
  printf("LSB[%d] : %d\n",i,lsb[i]);
  
}

printf("\n");
for(int i=0;i<4;i++){
  printf("MSB[%d] : %d\n",i,msb[i]);
}

}