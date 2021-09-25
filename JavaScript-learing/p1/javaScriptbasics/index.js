// "use strict"; // This restrict our code
// ----------------------

// var arr = [1, 2, 3, "bablu", 3.4, 32.0, 32];
// console.log(arr);
// console.log(arr[3]);
// ------------------------

// operators
// var a = 23;
// var b = 32;
// console.log(a + b, a - b, b - a, a * b, a / b, b / a, a % b);
// -------------------------

// Assignment 
// var c = b;
// c += 2;
// console.log(c);
// c -= 2;
// console.log(c);
// c *= 2;
// console.log(c);
// c /= 2;
// console.log(c);
// --------------------------

// comparison 
var x = 34;
var y = 23;
// console.log(x == y);
// console.log(x >= y);
// console.log(x <= y);
// console.log(x < y);
// console.log(x > y);
// ---------------------------

// logical operator
// console.log(true || false);
// console.log(true && false);
// console.log(3 & 5); // bitwise and
// console.log(!false);
// -----------------------------

// FUNCTIONS
function avg(a, b) {
    return (a + b) / 2;
}

c1 = avg(4, 6);
c2 = avg(2, 5);
// console.log(c1, c2);
// -------------------------

//conditional if
var age = 34;
if (age < 18) {
    // console.log("You are a kid...");
} else {
    // console.log("Now , you become adult");
}

// age = "asdf";
// if (age < 18) {
//     console.log("You are a kid");
// } else if (age > 18) {
//     console.log("you are a adult now...")
// } else if (age > 23) {
//     console.log("you are ready for job");
// } else {
//     console.log("This will print only invalid case");
// }
// -------------------------

// loops
var arr = [1, 2, 3, 4, 5, 6, 7];
// console.log(arr);
// for (var i = 0; i < arr.length; i++) {
//     console.log(arr[i]);
// }

//for each
// console.log("For Each loop");
// arr.forEach(function(element) {
//     console.log(element);
// });

const ac = 0;
// ac++;  // show error

let j = 0;
// Let j = 0;
// while (j < arr.length) {
//     console.log(arr[j]);
//     j++;
// }

// do {
//     console.log(arr[j]);
//     if (j == 2) {
//         // break;
//         // continue;
//     }
//     j++;
// } while (j < arr.length);
// ---------------------------

// Array Methods 
let myArr = ["Fan", "Camera", 23, null, true];
// console.log(myArr.length);
// myArr.pop();
// myArr.push("Anil");
// console.log(myArr);
// myArr.shift(); // first element remove
// // myArr.unshift(234) // first element add
// console.log(myArr);
// console.log(myArr.unshift(234)); // it return Length
// console.log(myArr.toString());
// console.log(myArr.sort());
// -------------------------------

//String Methods
let str = "Good morning Everyone, How are you Everything is nice...";
// console.log(str.length);
// console.log(str.indexOf("Eve"));
// console.log(str.lastIndexOf("Eve"));
// console.log(str.slice(0, 23));
// console.log(str.replace("Everyone", "Guys")); // it replace only first Occurence
// ----------------------------

//Dates in javaScript
myDate = new Date();
// console.log(myDate);
// console.log(myDate.getTime());
// console.log(myDate.getFullYear());
// console.log(myDate.getDay());
// console.log(myDate.getMinutes());
// console.log(myDate.getHours());
// -----------------------------

// Dom-manipulation
// let d = document.getElementById("click");
let d = document.getElementById("click");
// console.log(d);
let ele = document.getElementsByClassName("container");
// console.log(ele);
// console.log(ele[0]);
// console.log(ele[1]);
// console.log(ele[2]); //undefined

// ele[0].style.background = "yellow";
// ele[0].classList.add("bg-primary");

// ele[0].innerHTML = "<p> This is a paragraph using dom-manipulation...</p>";
// console.log(ele[0].innerHTML);
// console.log(ele[0].innerText);

// ele[0].classList.add("text-success");
// ele[0].classList.remove("bg-primary");
// -----------------------------

//  Create Element
// let tn = document.getElementsByTagName('div');
// console.log(tn);

// createEle = document.createElement('p');
// createEle.innerText = "YO! this para is create using createElement.";
// tn[0].appendChild(createEle);

// createEle2 = document.createElement('b');
// createEle2.innerText = "create using createElement.";
// tn[0].replaceChild(createEle2, createEle);
// ------------------------------

//  try by yourself
// removeChild(createElement);  -----> removes an element
// document.URL;
// document.title;
// document.location;
// document.scripts;
// document.links
// document.images;
// document.domain;
// ------------------------------

//  Query Selector
// sel = document.querySelector('.container');
// console.log(sel);
// sel = document.querySelectorAll('.container');
// console.log(sel);
// -----------------------------

// function clicked() {
//     console.log("The button is clicked...");
// }

// window.onload = function() {
//     console.log("The window is load...")
// };
// --------------------------------
// Events
// click.addEventListener('click', function() {
//     console.log("clicked on click-ID");
// });

// click.addEventListener('mouseover', function() {
//     console.log("mouseover on click-ID");
// });

// click.addEventListener('mouseout', function() {
//     console.log("mouseout of a click-ID");
// });

// prevHtml = document.querySelectorAll('.container')[1].innerHTML;
// click.addEventListener('mouseup', function() {
//     // console.log("mouseup on click-ID");
//     document.querySelectorAll('.container')[1].innerHTML = prevHtml;
// });

// click.addEventListener('mousedown', function() {
//     // console.log("mousedown on click-ID");
//     document.querySelectorAll('.container')[1].innerHTML = "<b> We have Clicked</b>";
// });
// ---------------------------------------

//Arrow Function
// function sum(a, b) {
//     return a + b;
// }
// sum = (a, b) => { // same as above
//     return a + b;
// }
// -----------------------------------------

// SetTimeout and SetTimeInterval
// lg = () => {
//     document.querySelectorAll('.container')[1].innerHTML = "<b> Set interval Fired...</b>";
//     console.log("print After 2sec");
// };
// clr1 = setTimeout(lg, 2000);
// // clearTimeout(clr1);// in console
// setInterval(lg, 2000); // continuous
// clr2 = setInterval(lg, 2000); // id is store in clr
// // clearInterval(clr2);// in console
// --------------------------------

// javaScript localStorage
localStorage.setItem("Name", "Anil");
// localStorage.clear();  //in console
// localStorage.getItem("Name"); // in console
// localStorage.removeItem("Name")
// ---------------------------------

// Json
// obj = {
//     name: "anil",
//     length: 1,
//     a: {
//         hi: 'Everyone yo"kta'
//     }
// };
// jso = JSON.stringify(obj);
// console.log(typeof jso)
// console.log(jso);

// convert data in obj
// par = JSON.parse(`{ "name": "anil", "length": 1, "a": { "hi": "Everyone yo\"kta" } }`); // not work i.e. give error
// par = JSON.parse(`{ "name": "anil", "length": 1, "a": { "hi": "Everyone yo\\"kta" } }`); // work
// console.log(par);
// ---------------------------------

// backticks
x = 34;
console.log(`value of x is ${x}`);