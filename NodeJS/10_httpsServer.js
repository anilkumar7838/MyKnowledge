const http = require('http');
const port = process.env.port || 3000;
// const port = process.env.PORT;
const server = http.createServer((req, res) => {
    // console.log(req);
    console.log(req.url);
    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/html');
    res.end('<h1> This is Ak tech </h1><p>Lets together rock the world!!!</p>');
});

server.listen(port, () => {
    console.log(`server is listening on port ${port}`)
});