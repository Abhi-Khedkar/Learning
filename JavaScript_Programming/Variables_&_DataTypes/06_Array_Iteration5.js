const products = [
  { name: "Laptop", price: 1000, inStock: true },
  { name: "Smartphone", price: 500, inStock: false },
  { name: "Tablet", price: 300, inStock: true },
  { name: "Headphones", price: 100, inStock: true }
];

const availableProducts = products.filter((product) => product.inStock);

const productLabels = availableProducts.map((product) => `${product.name} costs $${product.price}`);

for (const label of productLabels) 
{
    console.log(label);
}