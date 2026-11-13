function createCounter() {
  let count = 0; // Local variable inside createCounter

  // Returning an inner function that closes over 'count'
  return () => {
    count += 1;
    return count;
  };
}

const counterA = createCounter();
console.log(counterA()); // 1
console.log(counterA()); // 2

// A separate call creates a completely independent closure
const counterB = createCounter();
console.log(counterB()); // 1