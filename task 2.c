#include <stdio.h>
int deposit(int* balance, int* deposit_amount){
    int total_balance=*balance+*deposit_amount;
    printf(" Balance Successfully updated: %d",total_balance);

}//deposit end
void withdraw(int* balance, int* withdraw_amount){
    if(withdraw_amount<=balance){
        *balance=*balance-*withdraw_amount;
        printf("Successesfull Transaction");
    }
    else{
        printf("Transaction Declined: Insufficient Balance");
    }

}//withdraw end
int main(){
    int acc_balance=5000;
    int trans_type=0;
    int cash_amount=0;
    int deposit_amount=0;
    printf("-----------------------ATM System-----------------------");
    printf(" Enter transaction type:\n");
    printf("1. Debit\n");
    printf("2. Credit\n");
    scanf("%d",&trans_type);
  
    if(trans_type==1){
          printf("Amount: \n");
          scanf("%d",&cash_amount);
          withdraw(&acc_balance,&cash_amount);
    }
    else{
        printf("Enter Deposit amount: ");
        scanf("%d",&deposit_amount);
        deposit(&acc_balance,&deposit_amount);
    }
  
}
