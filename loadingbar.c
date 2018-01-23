#include<stdio.h>
#include<unistd.h>

int main(int argc, char ** argv){
    int total = 1000;
    printf("Loading.....");
    fflush(stdout);
    for(int i = 0 ;i<total; i++){
        usleep(1000);
        if(!(i%200)){
            printf("#");
            fflush(stdout);
        }
    }
    return 0;
}
