#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	int i,n=0;
	printf("Enter the string\n");
	scanf("%s",string);
	for(i=0;i<strlen(string)-1;i++){
		if(string[i]=='a'||string[i]=='b')
		    n++;
	}
	if(n==strlen(string)-1){
	    if(string[0]=='a'&&string[strlen(string)-1]=='a')
	        printf("String is accepted");
	    else
	        printf("String is Invalid");
       }
    else
        printf("String is Invalid");
	return 0;
}