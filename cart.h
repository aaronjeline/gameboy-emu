#ifndef CART
#define CART
#include <stdbool.h>

/**
	* This struct handles arbitrary reads from a potentially null cart
*/

typedef struct cartData_s{
	bool present;
	unsigned char* data;
}cartData;

cartData* initCart(unsigned char* cartPointer);

unsigned char* getBytesFromCart(cartData* data, int offset, int amount);

void cleanup(cartData* data);
