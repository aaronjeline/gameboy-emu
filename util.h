#ifndef UTIL
#define UTIL

#include <stdio.h>

//Only pass valid file descriptors
int getFileSize(FILE* file);

typedef struct node_s Node;

struct node_s{
	node_s* next;
	int data;
}

void append(Node* list, int new);

int* destroyAndReturnArray(Node* list);

