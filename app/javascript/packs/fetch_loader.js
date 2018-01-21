fetch('hello3.wasm')
.then(response => response.arrayBuffer())
.then(bytes => WebAssembly.instantiate(bytes, {}))
.then(results => {
  console.log(results.instance.exports.myFunction(156,282));
});
