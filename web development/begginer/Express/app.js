const express = require("express");
const path = require("path");

const app = express();
const port = 80;

//for serving static files
app.use("/static", express.static("static"))

// set the template engine  pug
app.set("view engine", "pug")

//set the view directory
app.set("views", path.join(__dirname, "views"))

//our pug demo endpoint
app.get("/demo", (req, res) => {
    res.status(200).render("demo", { title: "hey", message: "hello there!" })
})

app.get("/", (req, res) => {
    res.send("This is home page of my first app with Ak")
});

app.get("/about", (req, res) => {
    res.send("This is about page of my first app with Ak")
});

app.get("/Services", (req, res) => {
    res.send("This is Services page of my first app with Ak")
});

app.get("/Contact", (req, res) => {
    res.send("This is Contact page of my first app with Ak")
});

app.post("/About", (req, res) => {
    res.send("This is about page of my first app with Ak")
});

app.listen(port, () => {
    console.log(`The application started successfully on port:${port}`)
})