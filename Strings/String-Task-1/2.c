#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	char s[100];
	int i=1;
	puts("Enter the string");
	gets(s);
	if(strlen(s)%2!=0){
		puts("Sorry..Not possible");
		exit(0);
	}
	for(int i=0;i<strlen(s);i+=2){

		char temp = s[i];
		s[i] = s[i+1];
		s[i+1] = temp;
	}

	puts(s);
}