#include <stdio.h>

int main()
{
    struct{
    char food[20];
    char movie[20];
    char sports[20];
    char player[20];
    char personality[20];
    } celebrities[100];
    int i;
    for(i=0;i<4;i++){
        printf("Input for celebrity %d:\n",i+1);
        scanf("%s", celebrities[i].food);
        scanf("%s", celebrities[i].movie);
        scanf("%s", celebrities[i].sports);
        scanf("%s", celebrities[i].player);
        scanf("%s", celebrities[i].personality);
    }
    for(i=0;i<4;i++){
        printf("Output for celebrity %d:\n",i+1);
        printf("Favourite food: %s\n",celebrities[i].food);
        printf("Favourite movie: %s\n",celebrities[i].movie);
        printf("Favourite sports: %s\n",celebrities[i].sports);
        printf("Favourite player: %s\n",celebrities[i].personality);
        printf("Favourite personality: %s\n", celebrities[i].personality);
    }
    return 0;
}
