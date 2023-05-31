#include<stdio.h>
#include<stdlib.h>
//node for character and frequency
typedef struct
{
	char ch;
	int freq;
}cnode;
//node for huffman tree
typedef struct node
{
	char id[20];
	cnode c;
	struct node *left;
	struct node *right;
	int weight;
}tnode;
//node for linked list 
typedef struct qnode
{
	tnode *x;
	struct qnode *next;
}qnode;

tnode *createnode();
void assignHuffcode(tnode *root,char *bin,int j);
void merge(cnode *s,int low,int mid, int high);
void mergeSort(cnode *s,int low,int high);
qnode *insert(qnode *qn,tnode *tn);
qnode *delpnode(qnode *qn,tnode *t1);
tnode *min(qnode *qn);
int binTochar(char *buffer);
void decToBin(char *bits,char ch1);
void treeOfCf(FILE *cf,tnode *root,char *buffer1,int *buffer1Index,int *cfChar);
void freeAllocatedMemory(tnode *root);
int compress();