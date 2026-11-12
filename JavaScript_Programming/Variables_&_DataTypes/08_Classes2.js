class Wallet {
  #pin; // Declared private field

  constructor(pin) {
    this.#pin = pin;
  }

  verifyPin(inputPin) {
    return this.#pin === inputPin;
  }
}

const wallet = new Wallet(1234);
console.log(wallet.verifyPin(1234)); // true
// console.log(wallet.#pin); // SyntaxError: Private field '#pin' must be declared in an enclosing class