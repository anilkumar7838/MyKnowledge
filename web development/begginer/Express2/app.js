const express = require("express");
const path = require("path");
const fs = require("fs");

const app = express();
const port = 80;

//EXPRESS SPECIFIC STUFF
app.use("/static", express.static("static"))
app.use(express.urlencoded());

//PUG SPECIFIC STUFF
app.set("view engine", "pug") // set the template engine  pug
app.set("views", path.join(__dirname, "views")) //set the view directory

//ENDPOINTS
app.get('/', (req, res) => {
    const con = "This is the content so far using wisely"
    const params = { 'title': 'PubG is the worst game', "content": con }
    res.status(200).render('index.pug', params)
});
app.post('/', (req, res) => {
    name = req.body.name
    age = req.body.age
    gender = req.body.gender
    message = req.body.message
    let outputtowrite = `name:${name},age:${age},gender:${gender},message:${message}`;
    fs.writeFileSync('output.txt', outputtowrite)
    const params = { 'message': "your form has been submitted successfully" }
    res.status(200).render('index.pug', params);
})

//START THE SERVER
app.listen(port, () => {
    console.log(`The application started successfully on port:${port}`)
})