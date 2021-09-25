const express = require('express');
const path = require('path');
const app = express();
const port = 3000;
//--------------------
// const middleware = (req, res, next) => {
//     console.log(req);
//     next();
// }
// app.use(middleware);
//--------------------
app.use(express.static(path.join(__dirname, "static")));

// app.get('/hello', (req, res) => {
//     console.log("Hello Friends.");
//     res.send("Hello Friends.");
// });

app.get('/hello/:name', (req, res) => {
    console.log("Hello Friends.");
    res.send("Hello Friend " + req.params.name);
});


//--------------------
app.get('/about', (req, res) => {
    console.log("About page.");
    // res.send("About page.");
    // res.sendFile(path.join(__dirname, 'static/index.html'));
    // res.json({ "Anil": 20 });
});
app.get('/Contact', (req, res) => {
    console.log("Contact page.");
    res.send("Contact page.");
});

app.listen(port, () => {
    console.log(`Listening at : http://localhost:${port}`);
})