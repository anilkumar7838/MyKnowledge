const http = require("http");
const express = require("express");
const mongoose = require("mongoose");
const path = require("path");
const app = express();
const port = 80;

//connect Mongoose
mongoose.connect("mongodb://localhost/form", { useNewUrlParser: true, useUnifiedTopology: true });
//create Schema
let contactSchema = new mongoose.Schema({
    text: String,
    age: String,
    gender: String,
    email: String,
    password: String,
    more: String

});
var contactModel = new mongoose.model("Log_In", contactSchema);
//for html/pug
app.set('view engine', 'pug'); //set the template engine as pug
app.set('views', path.join(__dirname, 'views')); //set the views directory
//EXPRESS SPECIFIC STUFF
app.use('/static', express.static('static')); //for serving static files
app.use(express.urlencoded());
//Endpoints
app.get('/', (req, res) => {
    res.status(200).render('index.pug');
});
app.get('/services', (req, res) => {
    res.status(200).render('services.pug');
});
app.get('/login', (req, res) => {
    res.status(200).render('login.pug');
});
app.get('/payments', (req, res) => {
    res.status(200).render('payments.pug');
});
app.get('/contact', (req, res) => {
    res.status(200).render('contact.pug');
});
app.get('/booking', (req, res) => {
    res.status(200).render('booking.pug');
});
app.post("/Log-In", (req, res) => {
    var MyData = new contactModel(req.body);
    MyData.save().then(() => {
        res.send("This item has been save sucessfully in the database")
    }).catch(() => {
        res.status(400).send("The item was not save to the database")
    })
});
//START THE SERVER
app.listen(port, () => {
    console.log(`the application started successfully on port ${port}`);
})