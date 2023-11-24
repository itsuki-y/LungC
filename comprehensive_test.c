#include <stdio.h>
int main(){
    int count=1;
    for(count=1;count<=25;count++){
        if(count%3==0){
            printf("%d\n",count);
        }
    }
    while(25<=count&&count<=50){
        if(count%3==0){
            printf("%d\n",count);            
        }
        count++;
    }
    return 0;
}