//Synchronous or Blocking 
//-line by line execution

//Asynchronous or non-blocking
//-line by line execution is not guaranted
//-call back will fire
const fs = require("fs");
let text = fs.readFile("dele.txt", "utf-8", (err, data) => {
    console.log(err, data);
});
console.log("this is a message.");