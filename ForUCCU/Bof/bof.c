#include<stdio.h>
#include<stdlib.h>
#include<string.h>

unsigned long hashcode = 0x2cc29487;
char *keypt = NULL;

void md5bof(char *mid){
    char overflow[40];
	keypt = mid;
    printf("Oh, Ok, Please give me the check : ");
    scanf("%s", overflow);
    int i = 0;
    unsigned long result = 0x2cc29487;
    int *convert = (int*)keypt;
    for(i = 0; i < 1; ++i){
        result += convert[i];
    }
    if(result != hashcode){
        printf("Great!! Payment is confirmed.\n");
        printf("UCCU{Catch_Me_if_U_Can}\n");
    }
    else{
        printf("Oh no, You a fraudster!! I'll send you to the prison.\n");
	}
}


int main(){
	setvbuf(stdout, 0LL, 2, 0LL);
	setvbuf(stdin, 0LL, 1, 0LL);
	char choice;
	printf("Are you trying to pay in cash or??\n");
	char blank[20] = {0};
	md5bof(blank);
}
