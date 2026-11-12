class Vehicle {
  constructor(brand, speed) {
    this.brand = brand;
    this.speed = speed;
  }

  describe() {
    return `${this.brand} moving at ${this.speed} km/h`;
  }
}

class ElectricCar extends Vehicle {
  constructor(brand, speed, batteryRange) {
    super(brand, speed); // Calls the Vehicle constructor
    this.batteryRange = batteryRange;
  }

  // Method overriding
  describe() {
    return `${super.describe()} with a range of ${this.batteryRange} km`;
  }
}

const ev = new ElectricCar("Tesla", 120, 450);
console.log(ev.describe()); // "Tesla moving at 120 km/h with a range of 450 km"