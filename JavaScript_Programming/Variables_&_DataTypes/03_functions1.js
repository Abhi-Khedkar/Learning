const calculateTotal = (price, taxRate = 0.05) => {
  return price + (price * taxRate);
};

console.log(calculateTotal(100));       // 105 (uses default 0.05)
console.log(calculateTotal(100, 0.10)); // 110 (overrides with 0.10)