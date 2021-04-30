#include<stdio.h>
#include<string.h>


int main(){

	char data[25];
	int i,j,no_of_frames;
	int count=0;
	int size_of_frame;
	char frame[10];
	int n=0;
	
	printf("enter your data\n");
	scanf("%s",data);
	
	int data_size=strlen(data);
	
	//printf("%d",data_size);
	
	printf("enter the size of frame\n");
	scanf("%d",&size_of_frame);
	while(n<data_size){
	for(int i=n;i<n+size_of_frame;i++){
	printf("%c",data[i]);
	}
	printf("\n");
	n=n+size_of_frame;
	}
return 0;
	}
	
	
	
