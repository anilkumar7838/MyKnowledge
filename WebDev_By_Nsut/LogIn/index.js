// backend
const express = require("express");
const fs = require("fs");
const path = require('path');
const app = express();
const port = 3000;

app.use("./Static/css", express.static("css"));

app.get('/', (req, res) => {
    // res.statusCode = 200;
    // const data = fs.readFileSync('./Static/index.html');
    // res.send(data.toString());
    res.sendFile(path.join(__dirname, 'Static/index.html'))
});

app.listen(port, () => {
    console.log(`Listen at http://localhost:${port}`);
})