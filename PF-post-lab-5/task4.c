#include <stdio.h>

int main() {
    int res_open, itemavailable, balanceSufficient;

    printf("Is restaurant open? 0 for NOT 1 for YES ");
    scanf("%d", &res_open);

    printf("Is item available? 0 for NOT 1 for YES ");
    scanf("%d", &itemavailable);

    printf("Is balance sufficient? 0 for NOT 1 for YES ");
    scanf("%d", &balanceSufficient);

    if (res_open == 1) {
        if (itemavailable == 1 && balanceSufficient == 1) {
            printf("You can purchase item");
        }
        else {
            printf("Purchase not possible");
        }
    }
    else {
        printf("Purchase not possible");
    }
}