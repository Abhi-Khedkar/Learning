const languages = ["C", "C++", "Java"];

languages.push("JavaScript");

languages.unshift("Python");

const removedLanguage = languages.pop();

console.log("Current array:", languages);
console.log("Total items:", languages.length);
console.log('Is "Java" present?:', languages.includes("Java"));
console.log("Removed language:", removedLanguage);