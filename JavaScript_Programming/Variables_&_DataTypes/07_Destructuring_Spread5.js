const defaultSettings = {
  theme: "dark",
  notifications: true,
  volume: 80
};

// Clone defaultSettings and override 'volume' without touching defaultSettings
const userSettings = {
  ...defaultSettings,
  volume: 50
};

console.log(userSettings.volume);        // 50
console.log(defaultSettings.volume);     // 80 (original remains untouched)