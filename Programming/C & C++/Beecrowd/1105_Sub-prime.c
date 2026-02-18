//https://judge.beecrowd.com/en/problems/view/1105


#include <stdio.h>

#define MAX_BANKS 25

int main() {
    int bankBalances[MAX_BANKS];
    unsigned short totalBanks, totalTransactions;

    while (scanf("%hu %hu", &totalBanks, &totalTransactions), totalBanks && totalTransactions) {
        for (int bankID = 1; bankID <= totalBanks; ++bankID) {
            scanf("%d", &bankBalances[bankID]);
        }

        while (totalTransactions--) {
            unsigned short debtorBank, creditorBank;
            int transactionAmount;
            scanf("%hu %hu %d", &debtorBank, &creditorBank, &transactionAmount);
            bankBalances[debtorBank] -= transactionAmount;
            bankBalances[creditorBank] += transactionAmount;
        }

        int hasNegativeBalance = 0;
        for (int bankID = 1; bankID <= totalBanks; ++bankID) {
            if (bankBalances[bankID] < 0) {
                hasNegativeBalance = 1;
                break;
            }
        }

        printf("%s\n", hasNegativeBalance ? "N" : "S");
    }

    return 0;
}

