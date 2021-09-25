// getting started.js
var mongoose = require('mongoose');
mongoose.connect('mongodb://localhost/test', { useNewUrlParser: true, useUnifiedTopology: true });

var db = mongoose.connection;
db.on("error", console.error.bind(console, "connection error:"));
db.once("open", function() {
    console.log("We are Connected...")
});
var kittySchema = new mongoose.Schema({
    name: String
});
kittySchema.methods.speak = function() {
    var greeting = "My name is " + this.name
    console.log(greeting);
}
var kitten = mongoose.model("kitten", kittySchema);

var harrykitty = new kitten({ name: "harrykitty" });
var harrykitty2 = new kitten({ name: "harrykitty2" });
// console.log(harrykitty.name);
// harrykitty.speak();

harrykitty.save(function(err, any) {
    if (err) return console.error(err);
    any.speak();
})

harrykitty2.save(function(err, any) {
    if (err) return console.error(err);
    any.speak();
})

kitten.find({ name: "harrykitty2" }, function(err, anyname) {
    if (err) return console.error(err);
    console.log(anyname);
});