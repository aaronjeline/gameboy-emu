#include <stdio.h>

#include "util.h"

int getFileSize(FILE* file){
	int size;
	int location = ftell(file);
	fseek(file, SEEK_END);
	size = ftell(file);
	//TODO fix this
	fseek(file, SEEK_START);
	return size;
}
