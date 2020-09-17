#include<stdio.h>
#include<stdlib.h>




int main(){

unsigned char byte = 85;// Read from file
unsigned char mask = 1; // Bit mask
unsigned char bits[8];

  // Extract the bits
for (int i = 0; i < 8; i++) {
    // Mask each bit in the byte and store it
    bits[i] = (byte & (mask << i)) != 0;
}
 // For debug purposes, lets print the received data
for (int i = 0; i < 8; i++) {   
    printf("Bit: %d\n",bits[i]);
}


}