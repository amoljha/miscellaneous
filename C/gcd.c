#include<stdio.h>
#include<stdlib.h>

int gcd(int x, int y);
int i = 0;
int main(int argc, char ** argv){
	if(argc<2){
		printf("Error: Not enough arguments!!");
		exit(1);
	}
	
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	printf("Ans: gcd of %d and %d is %d\n",x,y,gcd(x,y));
	return 0;
}

int gcd(int x,int y){
	printf("Step %d:\ngcd of: %d and %d\n",++i,x,y);

	if(x==0){
		printf("gcd: %d\n",y);
		return y;
	}
	else if(y==0){
		printf("gcd: %d\n",x);
		return x;
	}
	else{
		int min = (x>y)?y:x;
		int max = (x>y)?x:y;
		printf("Mod of %d and %d is: %d\n",max,min,(max%min));
		return gcd((max%min),min);
	}
}

