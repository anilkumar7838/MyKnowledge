// module wrap function
// (function(exports, require, module, _filename, _dirname) {}) // but nodeJS done it automatically


obj = {
    name: "AnilKumar",
    profession: "Software-Engineer",
    Developer: true
}
console.log(exports, require, module, __filename, __dirname);
module.exports = obj;