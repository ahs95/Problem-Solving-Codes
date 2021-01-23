#include <stdio.h>

int main() {
    struct {
        char movie[20];
        char sports[20];
        char player[20];
        char personality[20];
        char food[20];
    } number1, number2;
    printf("Input for celebrity 1: \n");
    gets(number1.food);
    gets(number1.movie);
    gets(number1.sports);
    gets(number1.player);
    gets(number1.personality);
    printf("Input for celebtrity 2: \n");
    gets(number2.food);
    gets(number2.movie);
    gets(number2.sports);
    gets(number2.player);
    gets(number2.personality);
    printf("\n\n");
    printf("Category\t\tCelebrity 1\t\tCelebrity 2\n");
    printf("Favourite Food       \t\t%s\t\t%s\n", number1.food, number2.food);
    printf("Favourite Movie      \t\t%s\t\t%s\n", number1.movie, number2.movie);
    printf("Favourite Sports     \t\t%s\t\t%s\n", number1.sports, number2.sports);
    printf("Favourite Player     \t\t%s\t\t%s\n", number1.player, number2.player);
    printf("Favourite Personality\t\t%s\t\t%s\n", number1.personality, number2.personality);
    printf("Kaj shes, ebar ghumao.\n");
    return 0;
}
