console.log("file is linked");


//Functions
let a = 1,
    b = 2,
    c = 5;

function sum(a, b, c) {
    return a + b + c;
}
console.log("Sum is: " + sum(a, b, c));


// alert ,confirm ,prompt ||
// alert("Welcome to this site");
// name = prompt("What is your name?", "guest");
// console.log(name);
// let robot = confirm("are you a robot?");
// if (robot) {
//     console.log("Permission Denied.")
// } else {
//     console.log("Permission Access.")
// }
//for delete
let delet = confirm("do you wish to delete?");
if (delet) {
    console.log("Delete Successfully");
} else {
    console.log("Delete Denied.");
}