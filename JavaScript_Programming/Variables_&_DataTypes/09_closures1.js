function outer() {
  const secret = "JS_ROCKS";

  function inner() {
    // inner() can read 'secret' from outer()
    console.log(secret);
  }

  inner();
}

outer(); // "JS_ROCKS"