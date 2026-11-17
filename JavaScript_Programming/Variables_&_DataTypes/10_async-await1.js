function fetchPizza(flavor) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      if (flavor === "pineapple") {
        reject(new Error("Out of stock!"));
      } else {
        resolve(`Hot ${flavor} pizza delivered!`);
      }
    }, 1000);
  });
}