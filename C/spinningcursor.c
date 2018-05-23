#include<stdio.h>
#include<unistd.h>

void printCursor(){
	char cursorPos[4]= {'|','/','-','\\'};
	static int i;
	printf("Loading...[%c]\r",cursorPos[i]);
	fflush(stdout);
	i = ((++i)%4);	
}

int main(){
    	while(1){
		printCursor();
		usleep(100000);
	}
	return 0;
}
