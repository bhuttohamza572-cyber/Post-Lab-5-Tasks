#include <stdio.h>

int main() {
    int op;

    printf("Select the type of operation\n");
    printf("1. Balance inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("4. Pin change\n");

    scanf("%d", &op);

    switch(op) {
        case 2:
            int type;

            printf("Select the type of account");
            printf("\n1 for Saving account");
            printf("\n2 for Current account\n");

            scanf("%d", &type);

            switch(type) {
                case 1:
                    printf("\nSelected operation = Cash Withdrawal\n");
                    printf("Account type: Saving Account\n");
                    break;

                case 2:
                    printf("Selected operation = Cash Withdrawal\n");
                    printf("Account type: Current Account");
                    break;

                default:
                    break;
            }

            break;

        default:
            break;
    }

    return 0;
}