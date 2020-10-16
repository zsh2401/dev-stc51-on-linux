#include "fx.h"
void delay1ms(){
    uint8_t i,j;
    _nop_();
    i = 11;
    j = 190;
    do{
        while(--j);
    }while(--i);
}
void delay10ms(){
    uint8_t i,j;
    _nop_();
    _nop_();
    i = 108;
    j = 144;
    do{
        while(--j);
    }while(--i);
}
void delay100ms(){
    uint8_t i,j,k;

    i = 5;
    j = 52;
    k = 195;
    do{
        do{
            while (--k);
        }while(--j);
    }while(--i);
}