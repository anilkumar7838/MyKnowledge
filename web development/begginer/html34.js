const fs = require("fs");
let text = fs.readFileSync("dele.txt", "utf-8");
text = text.replace("content", "rohan");

console.log("the content of the file is:");
console.log(text);

console.log("Creating new File...");
fs.writeFileSync("Rohan.txt", text);