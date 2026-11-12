class Character {
  #maxHealth = 100;

  constructor(name, health = 100) {
    this.name = name;
    this.health = Math.min(health, this.#maxHealth);
  }

  takeDamage(amount) {
    this.health = Math.max(0, this.health - amount);
    console.log(`${this.name} took ${amount} damage. Health is now ${this.health}.`);
  }

  getStatus() {
    return `${this.name} has ${this.health}/${this.#maxHealth} health remaining.`;
  }
}

class Warrior extends Character {
  constructor(name, health, weapon) {
    super(name, health);
    this.weapon = weapon;
  }

  attack(targetCharacter) {
    targetCharacter.takeDamage(25);
    console.log(`${this.name} strikes ${targetCharacter.name} with ${this.weapon}!`);
  }
}

const goblin = new Character("Goblin", 50);
const thorin = new Warrior("Thorin", 100, "Warhammer");

thorin.attack(goblin);
console.log(goblin.getStatus());