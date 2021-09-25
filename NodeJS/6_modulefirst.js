// for common-java-Script
// const mod = require("./6_modulesecond");
// mod();
//---------------

// for ECMA
// *******Add  "type":"module" in package.json************
// import { print2 } from "./7_modulesecond.mjs";
// print2();
// import print23 from "./7_modulesecond.mjs"; // paranthesis remove
// print23();
// ---------------

// import print11, { print2 } from "./7_modulesecond.mjs"; // default without paranthesis and specific require paranthesis
// print11();
// print2();
// ----------------

import * as print from "./7_modulesecond.mjs";
console.log(print);
console.log(print.print2());