// Simulates an asynchronous network request that resolves after 1 second
function fetchUserData(userId) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      if (userId > 0) {
        resolve({ id: userId, username: "dev_warrior" });
      } else {
        reject(new Error("Invalid User ID"));
      }
    }, 1000);
  });
}

// Consumes the Promise sequentially and handles rejections gracefully
async function displayUser(userId) {
  try {
    const userData = await fetchUserData(userId);
    console.log(`Loaded user: ${userData.username} (ID: ${userData.id})`);
  } catch (error) {
    console.log(`Failed to load user: ${error.message}`);
  }
}

// Trigger both requests concurrently
displayUser(101);
displayUser(-5);