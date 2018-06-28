#include<stdio.h>
char* print( char* ms);
char* print( char* msg){
	if(msg == 0) return 0;
	else return msg;
}
void main(){
	double d = 1.5;
	char* msg;
	
	msg = print("hello");
	if(print("") != 0) printf("hello");
}


