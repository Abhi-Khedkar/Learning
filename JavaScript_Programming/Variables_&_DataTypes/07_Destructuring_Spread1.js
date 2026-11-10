const player = {
  username: "PixelKnight",
  level: 42,
  guild: "Shadowrunners"
};

// Unpack properties matching key names
const { username, level } = player;
console.log(username); // "PixelKnight"
console.log(level);    // 42

// Renaming during destructuring & setting fallback defaults
const { guild: teamName, rank = 1 } = player;
console.log(teamName); // "Shadowrunners"
console.log(rank);     // 1 (default value applied since 'rank' was missing)