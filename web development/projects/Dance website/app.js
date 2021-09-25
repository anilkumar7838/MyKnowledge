const http = require("http");
const express = require("express");
const path = require("path");
const mongoose = require("mongoose");
const app = express();
const port = 80;
// Connect Mongoose
mongoose.connect("mongodb://localhost/contactus", { useNewUrlParser: true, useUnifiedTopology: true });
//Create Schema
var contactSchema = new mongoose.Schema({
    name: String,
    phonenumber: String,
    gender: String,
    address: String,
    more: String
})
var contact = mongoose.model("Contact", contactSchema);
//EXPRESS SPECIFIC STUFF
app.use('/static', express.static('static')); //for serving static files
app.use(express.urlencoded());

//PUG SPECIFIC SUFF
app.set('view engine', 'pug') //set the template engine as pug
app.set('views', path.join(__dirname, 'views')) //set the views directory

//ENDPOINTS
app.get('/', (req, res) => {
    const params = {}
    res.status(200).render('home.pug', params);
})

app.get('/contact', (req, res) => {
    const params = {}
    res.status(200).render('contact.pug', params);
})

app.post('/contact', (req, res) => {
    var MyData = new contact(req.body)
    MyData.save().then(() => {
        res.send("This item has been save sucessfully in the database")
    }).catch(() => {
        res.status(400).send("The item was not save to the database")
    })
})

//START THE SERVER
app.listen(port, () => {
    console.log(`the application started successfully on port ${port}`);
})