#ifndef __FX
#define __FX

#include <8052.h>

typedef int int16_t;
typedef long int32_t;
typedef char int8_t;
typedef int8_t _bool_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long uint32_t;

void delay1ms();
void delay10ms();
void delay100ms();

void delay1mst(uint16_t times);
void delay10mst(uint16_t times);
void delay100mst(uint16_t times);

#endif // DEBUG