function celsiusToFahrenheit(celsius)
{
  return (celsius * 9/5) + 32;
}

const isAdult = (age) => age >= 18;

console.log(`30°C = ${celsiusToFahrenheit(30)}°F`);
console.log(`Is 20 years old an adult? ${isAdult(20)}`);
console.log(`Is 16 years old an adult? ${isAdult(16)}`);