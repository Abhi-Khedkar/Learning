const laptop = {
  brand: "Apple",
  ramInGb: 16,
  isAvailable: true,
};

// 1. Dot notation (standard)
console.log(laptop.brand);   // "Apple"

// 2. Bracket notation (used when key is stored in a variable or has special characters)
console.log(laptop["ramInGb"]); // 16

const propertyToRead = "brand";
console.log(laptop[propertyToRead]); // "Apple"