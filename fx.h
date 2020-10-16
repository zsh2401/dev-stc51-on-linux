#ifndef __FX
#define __FX

#include <8052.h>

#define INT8_MAX 255
#define INT8_MIN -256
#define INT16_MAX 32767
#define INT16_MIN -32768
#define INT32_MAX 2147483647
#define INT32_MIN -2147483648

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