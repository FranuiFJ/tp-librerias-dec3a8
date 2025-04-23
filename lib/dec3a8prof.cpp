#include <Arduino.h>//<> librerias comunes
#include "dec3a8.h"//""librerias creadas por el usuario
int valor, i = 0;
void dec3a8_init()
{
    RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;//habilito clk
    

    GPIOB->CRL |= 0x11111111; //declaro los pines como salidas push pull
}
void dec3a8(int I0, int I1, int I2){
    int ent = (I2<<2) | (I1<<1) | I0;
    switch (ent){
    case 000:
        GPIOB -> BSRR |= GPIO_BSRR_BS0;
        GPIOB -> BSRR |= GPIO_BSRR_BR1;
        GPIOB -> BSRR |= GPIO_BSRR_BR2;
        GPIOB -> BSRR |= GPIO_BSRR_BR3;
        GPIOB -> BSRR |= GPIO_BSRR_BR4;
        GPIOB -> BSRR |= GPIO_BSRR_BR5;
        GPIOB -> BSRR |= GPIO_BSRR_BR6;
        GPIOB -> BSRR |= GPIO_BSRR_BR7;
    break;
    case 001:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;
        GPIOB -> BSRR |= GPIO_BSRR_BS1;
        GPIOB -> BSRR |= GPIO_BSRR_BR2;
        GPIOB -> BSRR |= GPIO_BSRR_BR3;
        GPIOB -> BSRR |= GPIO_BSRR_BR4;
        GPIOB -> BSRR |= GPIO_BSRR_BR5;
        GPIOB -> BSRR |= GPIO_BSRR_BR6;
        GPIOB -> BSRR |= GPIO_BSRR_BR7;
    break;
    case 010:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;
        GPIOB -> BSRR |= GPIO_BSRR_BR1;
        GPIOB -> BSRR |= GPIO_BSRR_BS2;
        GPIOB -> BSRR |= GPIO_BSRR_BR3;
        GPIOB -> BSRR |= GPIO_BSRR_BR4;
        GPIOB -> BSRR |= GPIO_BSRR_BR5;
        GPIOB -> BSRR |= GPIO_BSRR_BR6;
        GPIOB -> BSRR |= GPIO_BSRR_BR7;
    break;
    case 011:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;
        GPIOB -> BSRR |= GPIO_BSRR_BR1;
        GPIOB -> BSRR |= GPIO_BSRR_BR2;
        GPIOB -> BSRR |= GPIO_BSRR_BS3;
        GPIOB -> BSRR |= GPIO_BSRR_BR4;
        GPIOB -> BSRR |= GPIO_BSRR_BR5;
        GPIOB -> BSRR |= GPIO_BSRR_BR6;
        GPIOB -> BSRR |= GPIO_BSRR_BR7;
    break;
    case 100:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;
        GPIOB -> BSRR |= GPIO_BSRR_BR1;
        GPIOB -> BSRR |= GPIO_BSRR_BR2;
        GPIOB -> BSRR |= GPIO_BSRR_BR3;
        GPIOB -> BSRR |= GPIO_BSRR_BS4;
        GPIOB -> BSRR |= GPIO_BSRR_BR5;
        GPIOB -> BSRR |= GPIO_BSRR_BR6;
        GPIOB -> BSRR |= GPIO_BSRR_BR7;
    break;
    case 101:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;
        GPIOB -> BSRR |= GPIO_BSRR_BR1;
        GPIOB -> BSRR |= GPIO_BSRR_BR2;
        GPIOB -> BSRR |= GPIO_BSRR_BR3;
        GPIOB -> BSRR |= GPIO_BSRR_BR4;
        GPIOB -> BSRR |= GPIO_BSRR_BS5;
        GPIOB -> BSRR |= GPIO_BSRR_BR6;
        GPIOB -> BSRR |= GPIO_BSRR_BR7;
    break;
    case 110:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;
        GPIOB -> BSRR |= GPIO_BSRR_BR1;
        GPIOB -> BSRR |= GPIO_BSRR_BR2;
        GPIOB -> BSRR |= GPIO_BSRR_BR3;
        GPIOB -> BSRR |= GPIO_BSRR_BR4;
        GPIOB -> BSRR |= GPIO_BSRR_BR5;
        GPIOB -> BSRR |= GPIO_BSRR_BS6;
        GPIOB -> BSRR |= GPIO_BSRR_BR7;
    break;
    case 111:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;
        GPIOB -> BSRR |= GPIO_BSRR_BR1;
        GPIOB -> BSRR |= GPIO_BSRR_BR2;
        GPIOB -> BSRR |= GPIO_BSRR_BR3;
        GPIOB -> BSRR |= GPIO_BSRR_BR4;
        GPIOB -> BSRR |= GPIO_BSRR_BR5;
        GPIOB -> BSRR |= GPIO_BSRR_BR6;
        GPIOB -> BSRR |= GPIO_BSRR_BS7;
    break;
    }
}