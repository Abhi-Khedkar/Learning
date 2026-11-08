const developer = {
  name: "John Doe",
  experience: 5,
  knownLanguages: ["C", "C++", "Java"],
  isEmployed: true,
};

// Updating experience to increase it by 1
developer.experience += 1;

// Adding a new property called favoriteLanguage
developer.favoriteLanguage = "JavaScript";

// Adding a method called getProfile
developer.getProfile = function() {
  return `${this.name} has ${this.experience} years of experience and loves ${this.favoriteLanguage}.`;
};

// Calling the getProfile method and printing the result
console.log(developer.getProfile());