const user = {
    id: 101,
    username: "coder123",
    email: "coder@example.com",
    role: "developer"
};

// Extract username and email into variables, and extract role into a variable named userRole
const { username, email, role: userRole } = user;

console.log(username); // "coder123"
console.log(email);    // "coder@example.com"
console.log(userRole); // "developer"

// Declare an array of scores
const scores = [95, 88, 72, 60];

// Use array destructuring to store the first score in topScore, the second in secondScore, and ignore the rest
const [topScore, secondScore] = scores;

console.log(topScore);    // 95
console.log(secondScore); // 88

// Create an updated user object using the spread operator
const updatedUser = {
    ...user,
    role: "tech_lead",
    isActive: true
};

// Log both objects to verify that user was not mutated
console.log(user);
console.log(updatedUser);