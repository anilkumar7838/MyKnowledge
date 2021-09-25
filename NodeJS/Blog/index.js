const express = require('express');
const path = require('path');
var exphbs = require('express-handlebars');

const app = express();
const port = 3000;
//--------------------

app.engine('handlebars', exphbs());
app.set('view engine', 'handlebars');

app.use('/static', express.static(path.join(__dirname, "static")));
app.use('/', require(path.join(__dirname, "routes/blog.js")));

app.listen(port, () => {
    console.log(`Listening at : http://localhost:${port}`);
})