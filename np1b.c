#include<stdio.h>
#include<string.h>


int main(){

	char data[25][25];
	int i,j,no_of_frames;
	int count=0;
	int size_of_frame;
	char frame[10];
	int n=0;
	printf("how many frames u want to enter?\n");
	scanf("%d",&no_of_frames);
	
	printf("enter frames\n");
	for(int i=0;i<no_of_frames;i++){
	scanf("%s",data[i]);
	}
	
	for(int i=0;i<no_of_frames;i++){
	count+=strlen(data[i]);
	printf("number of bytes in frame %d is %ld\n",i+1,strlen(data[i]));
	}

	printf("total number of bytes in all frames =%d",count);
	
	return 0;
	}
