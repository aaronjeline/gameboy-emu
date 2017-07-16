#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

#include "cart.h"
#include "util.h"

typedef struct registers_s{
	unsigned char a;
	unsigned char b;
	unsigned char c;

}

int main(){
	//Attempt to allocate buffers for memory
	unsigned char* memory = malloc(0x10000);
	if(memory==0x0){
		printf("Couldn't allocate memory, aborting\n");
		return 1;
	}
	cartData* cart = 0x0;
	FILE* rawCart = 0x0;
	if((argc==1) && ((rawCart = fopen(argv[1], "rb") || (rawCart!=0x0)){
		int cartSize = getFileSize(rawCart);
		unsigned char* tempBuffer = malloc(cartSize);
		fread(tempBuffer, 1, cartSize, rawCart);
		fclose(cartSize);
		cart = initCart(tempBuffer);
	}else{
		//Initialize an empty cart
		cart = initCart(0x0);
		//Warn the user
		printf("Warning: No cartridge found. Initializing a completely empty cartridge!\n");
	}

	//Create registers



			
