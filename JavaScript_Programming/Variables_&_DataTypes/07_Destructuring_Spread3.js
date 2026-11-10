const rgb = [255, 140, 0];

const [red, green, blue] = rgb;
console.log(red);   // 255
console.log(green); // 140

// Skipping elements with an empty comma slot
const [primaryColor, , secondaryColor] = ["Crimson", "Gold", "Navy"];
console.log(secondaryColor); // "Navy"