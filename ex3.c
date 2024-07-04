#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int countHeads = 0;

    
    for (i = 0; i < 3; i++) {
        int r = rand();
        printf("Round %d: ",i+1);
        if(r%2 == 0){
            printf("Heads\n");
            countHeads++;
        }
        else printf("Tails\n");
    }
    printf("Heads: %d, Tails: %d\n",countHeads,3-countHeads);

   


    return 0;
}
