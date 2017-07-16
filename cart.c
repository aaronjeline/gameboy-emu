/**
 *	CARTRIDGE DATA STRUCTURE
*/


#include <stdlib.h>
#include <stdbool.h>

#include "cart.h"


cartData* initCart(unsigned char* cartPointer){
	cartData new* = malloc(sizeof(cartData));
	if(cartPointer==0x0){
		new->present = false;
		new->data = 0x0;
	}else{
		new->present = true;
		new->data = cartPointer;
	}
	return new;
}

unsigned char* getBytesFromCart(cartData* data, int offset, int amount){
	unsigned char* resultBuffer = 0x0;
	if(data->present){
		resultBuffer = malloc(amount);
		memcpy(resultBuffer,(data->data)+offset,amount);
	}else{
		resultBuffer = calloc(1,amount);
	}
	return resultBuffer;
}

void cleanUp(chartData* data){
	free(data->data);
	free(data);
	return;
}
	





