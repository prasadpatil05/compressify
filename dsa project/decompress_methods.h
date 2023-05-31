#include<stdio.h>
#include<stdlib.h>


typedef struct
{
	char ch;
	int freq;
}cnode1;
typedef struct node1
{
	char id[20];
	cnode1 c;
	struct node1 *left;
	struct node1 *right;
	int weight;
}tnode1;

void strrev(char *s);
tnode1 *createnode1();
void decToBin1(char *bits,char ch1);
int binTochar1(char *buffer);
void decodeTree(FILE *cf,tnode1* root,char *buffer,int *bufferIndex,int *readCount);
void freeAllocatedMemory1(tnode1 *root);
int decompress();