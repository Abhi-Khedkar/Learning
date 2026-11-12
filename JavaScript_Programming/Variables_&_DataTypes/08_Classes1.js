class BankAccount {
  constructor(accountHolder, initialBalance = 0) {
    this.accountHolder = accountHolder;
    this.balance = initialBalance;
  }

  // Method (no 'function' keyword needed)
  deposit(amount) {
    this.balance += amount;
    return `Deposited $${amount}. New balance: $${this.balance}`;
  }
}

const myAccount = new BankAccount("Aditi", 500);
console.log(myAccount.deposit(200)); // "Deposited $200. New balance: $700"