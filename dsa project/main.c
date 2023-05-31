#include<stdio.h>
#include<stdlib.h>
#include"compress_methods.h"
#include"decompress_methods.h"

void main(){
    int choice;
    printf("Enter 1 to compress a file\nEnter 2 to decompress a file\n");
    scanf("%d",&choice);
    if(choice==1)
        compress();
    else if(choice==2)
        decompress();
    else
        printf("Invalid choice\n");
}