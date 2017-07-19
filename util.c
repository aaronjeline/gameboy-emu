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


void append(Node* list, int new){
	while(list->next!=0x0){
		list = list->next;
	}
	list->next = malloc(sizeof(Node));
	list->next->next = 0x0;
	list->next->data = new;
	return;
}

int* destroyAndReturnArray(Node* list){
	Node* cur = list;
	Node* last = 0x0;
	int size = 1;
	while(list->next!=0x0){
		size++;
		list = list->next;
	}
	int* array = malloc(size);
	for(int i=0;i<size;i++){
		array[i] = cur->data;
		last = cur;
		if(cur->next!=0x0){
			cur = cur->next;
		}
		free(last);
	}
	return array;
}




