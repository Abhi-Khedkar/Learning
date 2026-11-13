function createStopwatch() {
  let seconds = 0;

  return {
    tick() {
      seconds += 1;
    },
    getTime() {
      return `${seconds}s`;
    }
  };
}

const watch = createStopwatch();
watch.tick();
watch.tick();
console.log(watch.getTime()); // "2s"
console.log(watch.seconds);   // undefined (completely private)