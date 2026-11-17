async function orderDinner() {
  console.log("Placing order...");

  try {
    const message = await fetchPizza("Margherita");
    console.log(message); // Runs after 1 second: "Hot Margherita pizza delivered!"
  } catch (error) {
    console.error(`Order failed: ${error.message}`);
  }
}

orderDinner();