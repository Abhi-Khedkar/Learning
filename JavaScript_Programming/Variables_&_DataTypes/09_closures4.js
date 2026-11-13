function createVault(initialBalance = 0) {
  let balance = initialBalance;

  return {
    deposit(amount) {
      balance += amount;
      console.log(`Deposited $${amount}. New balance: $${balance}`);
    },
    withdraw(amount) {
      if (amount > balance) {
        console.log("Insufficient funds!");
      } else {
        balance -= amount;
        console.log(`Withdrew $${amount}. Remaining balance: $${balance}`);
      }
    },
    checkBalance() {
      return balance;
    }
  };
}

// Test cases
const myVault = createVault(100);

myVault.deposit(50);          // Deposited $50. New balance: $150
myVault.withdraw(200);        // Insufficient funds!
myVault.withdraw(80);         // Withdrew $80. Remaining balance: $70
console.log(myVault.checkBalance()); // 70
console.log(myVault.balance);        // undefined (completely private)