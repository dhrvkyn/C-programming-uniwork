#include <stdio.h>

int main() {
    /*
     * Question: Write a program on menu based banking where the user has three accounts and he/she can deposit, withdraw and check their balance in any account they chose.
     * Given: A user, has three accounts, ability to manage accounts
     * Algorithm: Start with some empty variables(?) - ... then start with a while loop, given condition is true and make it run and print menu and stuff and then add if else statements to perform various actions, i think that'll do it.
     */
    float account_balances[3] = {0.0, 0.0, 0.0};
    int choice;
    int account_number;
    float amount;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Thank you for using the banking system. Goodbye!\n");
            break;
        }

        printf("Select account (1, 2, or 3): ");
        scanf("%d", &account_number);

        if (account_number < 1 || account_number > 3) {
            printf("Invalid account number. Please choose 1, 2, or 3.\n");
            continue;
        }

        account_number -= 1;

        if (choice == 1) {
            // Deposit
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0) {
                account_balances[account_number] += amount;
                printf("%.2f deposited successfully!\n", amount);
            } else {
                printf("Amount should be positive.\n");
            }
        } else if (choice == 2) {
            // Withdraw
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= account_balances[account_number]) {
                account_balances[account_number] -= amount;
                printf("%.2f withdrawn successfully!\n", amount);
            } else if (amount > account_balances[account_number]) {
                printf("Insufficient funds.\n");
            } else {
                printf("Amount should be positive.\n");
            }
        } else if (choice == 3) {
            // balance feature
            printf("Account %d balance: %.2f\n", account_number + 1, account_balances[account_number]);
        } else {
            printf("Invalid choice. Please choose from the menu.\n");
        }
    }

    return 0;
}
// this code will print a menu when we run it and will ask for an input and then an input again to show the result, user can view and manage their (assumed) account using this program.
