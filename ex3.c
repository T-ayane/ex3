#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int countHeads = 0;
    char name[20];

    printf("Who are you?\n");
    scanf("%s",&name);
    printf("Hello, %s!\n",name);
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

    if(countHeads > (3-countHeads))printf("You won\n");
    else printf("You lost\n");


    return 0;
}
