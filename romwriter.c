#include <stdio.h>

int main(int argc, char** argv){
	for(int i=0;i<argc;i++){
		print("%s", argv[i]);
	}
	return 0;
}


