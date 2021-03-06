console.log("Hello world");
const http = require('http');
const hostname = '127.0.0.1';
const port = 3000;
const server = http.createServer((req, res) => {
    res.statusCode = 200;
    // res.setHeader('Content-Type', 'text/plain');
    res.setHeader('Content-Type', 'text/html');
    // res.end('Hello World');
    res.end(`<!DOCTYPE html>
    <html lang="en">
    
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <meta http-equiv="X-UA-Compatible" content="ie=edge">
        <title>animations</title>
        <style>
            .container {
                background-color: coral;
            }
            
            .box {
                background-color: cyan;
                width: 250px;
                height: 250px;
                border: 3px solid red;
                position: relative;
                /* animation-name: anil; */
                /* animation-name: anil2;
                animation-duration: 5s;
                animation-iteration-count: infinite;
                animation-fill-mode: alternate; */
                /* animation-timing-function: ease-in; */
                /* animation-timing-function: ease-out; */
                /* animation-timing-function: ease-in-out;
                animation-delay: 1s;
                animation-direction: reverse; */
                /* animation: animation-name animation-duration animation-timing-function animation-delay animation-iteration-count animation-fill-mode; */
                animation: anil2 2s ease-in-out 1s infinite;
            }
            
            @keyframes anil {
                from {
                    width: 0px;
                }
                to {
                    width: 100%;
                }
            }
            
            @keyframes anil2 {
                0% {
                    top: 0px;
                    left: 0px;
                }
                20% {
                    top: 250px;
                    left: 0px;
                }
                40% {
                    top: 250px;
                    left: 250px;
                }
                60% {
                    top: 0px;
                    left: 250px;
                }
                80% {
                    top: 0px;
                    left: 0px;
                }
            }
        </style>
    </head>
    
    <body>
        <div class="container">
            <div class="box"></div>
        </div>
    </body>
    
    </html>`);
});
server.listen(port, hostname, () => {
    console.log(`Server Running at http://${hostname}:${port}/`);
});