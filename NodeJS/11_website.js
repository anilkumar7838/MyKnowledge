const fs = require('fs');
const http = require('http');

const port = process.env.port || 3000;
// const port = process.env.PORT;
const server = http.createServer((req, res) => {
    // console.log(req);
    console.log(req.url);
    res.setHeader('Content-Type', 'text/html');
    if (req.url == '/') {
        res.statusCode = 200;
        res.end('<h1> This is Ak tech </h1><p>Lets together rock the world!!!</p>');
    } else if (req.url == '/about') {
        res.statusCode = 200;
        res.end('<h1> About Ak-tech </h1><p>This is about page!!!</p>');
    } else if (req.url == '/Home') {
        res.statusCode = 200;
        const data = fs.readFileSync('index.html');
        res.end(data.toString());
    } else {
        res.statusCode = 404;
        res.end('<h1> Page not found </h1><p>Sorry!!!</p>');
    }
});

server.listen(port, () => {
    console.log(`server is listening on port ${port}`);
});