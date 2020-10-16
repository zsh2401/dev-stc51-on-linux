#include "fx.h"
void main(void){
	for(uint8_t i = 0;i<20;i++){
		delay100ms();
	}
	// delay100ms();
	P0 = 0x01;
	while(1);
}
