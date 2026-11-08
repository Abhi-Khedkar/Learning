const car = {
  make: "Tata",
  model: "Harrier",
  year: 2023,
  // Shorthand method syntax
  getInfo() {
    return `${this.year} ${this.make} ${this.model}`;
  }
};

console.log(car.getInfo()); // "2023 Tata Harrier"