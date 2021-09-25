const fs = require('fs');

// --------------------------
// this does not block the code
// fs.readFile('./file.txt', 'utf8', (err, data) => {
//     console.log(err, data);
// });
// fs.writeFile('file2.txt', "this is a file", () => {
//     console.log("Written to the file");
// });

// ----------------------------
// This is for intentionally

//method 1
// const a = fs.readFileSync('file.txt', 'utf8');
// console.log(a);

// method2
// const a = fs.readFileSync('file.txt');
// console.log(a); // buffer value
// console.log(a.toString());
// ---------------------------

const b = fs.writeFileSync('file2.txt', "this is a file2");
console.log(b); // return nothing

console.log("finished reading file");